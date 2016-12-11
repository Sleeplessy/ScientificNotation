//Simplely translte string - numbers into scientific notation number string
//Example :	1-- > 1;
//			12.34-- > 1.234E1;
//			4598-- > 4.598*10^3;
#pragma once
#include<iostream>
#include"Scientific_Notation.h"
std::string Erro_Str;
SN_NUMBER::SN_NUMBER(std::string SN_NUMBER,NTYPE SN_TYPE) {
	//Constructor
	this->SC_NUMBER = SN_NUMBER;
	this->ERROR_HANDLER();
	if (SN_NUMBER.find('.', 0) != std::string::npos) {
		SN_DOTP = static_cast<int>(SN_NUMBER.find('.'));
		this->SC_NUMBER.replace(SN_NUMBER.find('.'), 1, "");
	}
	else {
		this->SN_DOTP = -1;
	}
	SN_NDIGITS = this->SC_NUMBER.length();
	if (SN_TYPE == SN_NUMBER::NTYPE_EXP) {
		SN_EXPSTR = "E";
	}
	else {
		SN_EXPSTR = "*10^";
	}
}
SN_NUMBER::SN_NUMBER() {
	SC_NUMBER = "";
	SN_NDIGITS = NULL;
	SN_DOTP = NULL;
	SN_DIGIT = NULL;
}
SN_NUMBER::~SN_NUMBER() {
	//Destructor
}
int SN_NUMBER::NDIGIT() {
	return this->SN_NDIGITS;
}
int SN_NUMBER::DIGIT() {
	if (SN_DOTP == -1) {
		SN_DIGIT = SN_NDIGITS - 1;
		//Number is an interger
	}
	else {
		SN_DIGIT = SN_DOTP - 1;
		//not interger
	}
	return SN_DIGIT;
}
std::string SN_NUMBER::SN_Producer() {
	DIGIT();
	std::string TargetString;
	TargetString += SC_NUMBER.substr(0, 1);
	if (SN_DIGIT != 0)
		TargetString += ".";
	TargetString += SC_NUMBER.substr(1);
	if (SN_DIGIT != 0) {
		TargetString += (SN_EXPSTR+std::to_string(SN_DIGIT));
	}
	return TargetString;
}
void SN_NUMBER::ERROR_HANDLER() {

}