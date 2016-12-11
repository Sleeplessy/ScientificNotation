#include<iostream>
#include"Scientific_Notation.h"
int main() {
	std::string Inputs;
	std::cout << "Please Input your numbers: ";
	std::cin >> Inputs;
	SN_NUMBER Number(Inputs,SN_NUMBER::NTYPE_TENS);
	std::cout<<Number.SN_Producer();
	std::cout<< std::endl;
		return 0;
}