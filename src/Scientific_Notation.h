#ifndef _SN_NUMBER_
#define _SN_NUMBER_
#include<string>
typedef int NTYPE;		//The notation type
class SN_NUMBER {
public:
	static const NTYPE NTYPE_EXP = 0;		//Stands for format like "1.353E2"
	static const NTYPE NTYPE_TENS = 1;		//Stands for format like "1.353*10^2"
	SN_NUMBER(std::string SC_NUMBER,NTYPE type = SN_NUMBER::NTYPE_EXP);
	SN_NUMBER();
	~SN_NUMBER();
	int NDIGIT();
	virtual int DIGIT();
	std::string SN_Producer();
private:
	std::string SC_NUMBER;		//The Number String
	int SN_NDIGITS;				//Digits of Number
	int SN_DOTP;				//The position of Number
	int SN_DIGIT;
	std::string SN_EXPSTR;
	void ERROR_HANDLER();
};
#endif