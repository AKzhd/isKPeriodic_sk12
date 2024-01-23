#include <iostream>
#include <string>



bool check(std::string str, int len, int k, int i)
{

	for (int j = 0; j < k; j++)
	{
		if (str[i] != str[j]) return false;
		i++;
	}

	for (int j = 0; j < k; j++)
		std::cout << str[j]; 
	std::cout << " - repeat" << std::endl;
	
	return true;
}


bool isKperiodic(std::string str, int len, int k)
{
	for (int i = 0; i < len; i += k)
	{

		if (!check(str, len, k, i)) return false;
	}
	return true;
}