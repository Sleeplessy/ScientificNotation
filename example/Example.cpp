//The example codes,shows how to use SN_NUMBER functions
#include<iostream>
#include"../src/Scientific_Notation.h"
int main() {
	std::string Inputs;
	std::cout << "Please Input your numbers: ";
	std::cin >> Inputs;
	SN_NUMBER Number(Inputs, SN_NUMBER::NTYPE_TENS);		//Uses the "...*10^n" formats
	std::cout << Number.SN_Producer();
	std::cout << std::endl;
	return 0;
}