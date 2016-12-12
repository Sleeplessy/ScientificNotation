//The example codes,shows how to use SN_NUMBER functions
#include<iostream>
#include"../src/Scientific_Notation.h"
int main() {
	std::string NumStr = "1024.96";
	SN_NUMBER MyNum1(NumStr), MyNum2("123456"),MyNum3("12a3445");
	std::cout << "MyNum1:" << MyNum1 << std::endl;
	std::cout << "MyNum2:" << MyNum2 <<"Number of digits: "<<MyNum2.NDIGIT() <<std::endl;
	std::cout << "MyNum3:" << MyNum3 << std::endl;
	return 0;
}