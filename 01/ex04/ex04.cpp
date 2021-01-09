//
// Created by Mahmud Jego on 1/9/21.
//

#include <iostream>

int main()
{
	std::string szStr = "HI THIS IS BRAIN";

	std::string *pszStr = &szStr;
	std::string& lszStr = szStr;

	std::cout << "Var – " << szStr << std::endl;
	std::cout << "Ptr – " << *pszStr << std::endl;
	std::cout << "Link – " << lszStr << std::endl;
	return (0);
}
