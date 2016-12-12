//Simplely translte string - numbers into scientific notation number string
//Example :	1-- > 1;
//			12.34-- > 1.234E1;
//			4598-- > 4.598*10^3;
#pragma once
#include<cctype>
#include"Scientific_Notation.h"
#define GetVarName(x) #x
SN_NUMBER::SN_NUMBER(std::string SN_NUMBER, NTYPE SN_TYPE) {
	//Constructor
	this->SN_NUMSTR = SN_NUMBER;
	this->ERROR_HANDLER();
	this->DOTP(SN_NUMSTR);
	this->NDIGIT(SN_NUMSTR);
	this->EXP(SN_TYPE);
}
SN_NUMBER::SN_NUMBER() {
	SN_NUMSTR = "";
	SN_NDIGIT = NULL;
	SN_DOTP = NULL;
	SN_DIGIT = NULL;
}
SN_NUMBER::~SN_NUMBER() {
	//Destructor
}
int SN_NUMBER::DOTP()
{
	return SN_DOTP;
}
int SN_NUMBER::DOTP(std::string SN_NUMBER) {
	if (SN_NUMBER.find('.', 0) != std::string::npos) {
		SN_DOTP = static_cast<int>(SN_NUMBER.find('.'));
		this->SN_NUMSTR.replace(SN_NUMBER.find('.'), 1, "");
	}
	else {
		this->SN_DOTP = -1;
	}
	return SN_DOTP;
}
int SN_NUMBER::NDIGIT() {
	return this->SN_NDIGIT;
}
int SN_NUMBER::NDIGIT(std::string SN_NUMBER) {
	SN_NDIGIT = this->SN_NUMSTR.length();
	return SN_NDIGIT;
}
int SN_NUMBER::DIGIT() {
	if (SN_DOTP == -1) {
		SN_DIGIT = SN_NDIGIT - 1;
		//Number is an interger
	}
	else {
		SN_DIGIT = SN_DOTP - 1;
		//not interger
	}
	return SN_DIGIT;
}
std::string SN_NUMBER::EXP() {
	return SN_EXPSTR;
}
NTYPE SN_NUMBER::EXP(NTYPE type) {
	if (type == SN_NUMBER::NTYPE_EXP) {
		SN_EXPSTR = "E";
	}
	else {
		SN_EXPSTR = "*10^";
	}
	return type;
}
std::string SN_NUMBER::SN_Producer() {
	DIGIT();
	std::string TargetString;
	TargetString += SN_NUMSTR.substr(0, 1);
	if (SN_DIGIT != 0)
		TargetString += ".";
	TargetString += SN_NUMSTR.substr(1);
	if (SN_DIGIT != 0) {
		TargetString += (SN_EXPSTR + std::to_string(SN_DIGIT));
	}
	return TargetString;
}
std::ostream & operator<<(std::ostream &ostream, SN_NUMBER NUM) {
	ostream << NUM.SN_Producer();
	return ostream;
};
void SN_NUMBER::ERROR_HANDLER() {
	std::string Erro_Str;
	Erro_Str = "";
	//Handles the error number src

	//handle the signs position
	if ((SN_NUMSTR.find("-") != 0 && SN_NUMSTR.find("-") != std::string::npos) ||
		SN_NUMSTR.find("+") != 0 && SN_NUMSTR.find("+") != std::string::npos) {
		Erro_Str = "Sign position error,or complex signs find.";
	}

	//handle the non-digit inputs
	for (unsigned int i = 0; i < SN_NUMSTR.size(); i++) {
		if (SN_NUMSTR.at(i) < '0' || SN_NUMSTR.at(i) > '9') {
			if (SN_NUMSTR.at(i) != '+' && SN_NUMSTR.at(i) != '-' && SN_NUMSTR.at(i) != '.')
				Erro_Str = "Some of the inputs is not a digit.";
		}
	}
	if (Erro_Str != "") {
		std::cerr << "Error info : "<< Erro_Str << std::endl;
	}
}

