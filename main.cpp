#include <iostream>
#include <string>
#include "ch.hpp"


int main()
{
	setlocale(LC_ALL,"");
	int k = 3; //frequency rate
	std::string first = "123123123";
	std::string second = "RRTDEDHIDEUDTTTDDTTTTTDTTDTT";
	std::string third = "zxczxczxczxc";
	int len1 = first.length();
	int len2 = second.length();
	int len3 = third.length();



	
	if (isKperiodic(first, len1, k)) std::cout << "==> 1 is periodic \n" << std::endl; else std::cout << "==> 1 is not periodic \n" << std::endl; 
	if (isKperiodic(second, len2, k)) std::cout << "==> 2 is periodic \n" << std::endl; else std::cout << "==> 2 is not periodic \n" << std::endl;
	if (isKperiodic(third, len3, k)) std::cout << "==> 3 is periodic \n" << std::endl; else std::cout << "==> 3 is not periodic \n" << std::endl;

	return 0;
}