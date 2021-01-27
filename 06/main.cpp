//
// Created by Mahmud Jego on 1/26/21.
//

#include <iostream>
#include <iomanip>
#include <ostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "bad argc" << std::endl;
		return (13);
	}
	Convert convert2("-inff");
	convert2.toDouble();
	convert2.toFloat();
	std::cout << std::endl;

	Convert convert3("1.35");
	convert3.toChar();
	convert3.toInt();
	convert3.toFloat();
	convert3.toDouble();

//	Convert convert(argv[1]);
//	Convert convert1("3532523523");
//	Convert convert2("3532523523.0f");
/*	convert.toChar();
	convert.toInt();
	convert.toFloat();
	convert.toDouble();*/

/*	std::stringstream ss;
//	char hello[] = "-2147483648";
	ss << argv[1];
	int nInt;
	double dDouble;
	float fFloat;
	ss >> nInt;
	std::cout << argv[1] << std::endl;
	std::cout << "int" << std::endl;
	std::cout << ss.fail() << std::endl;
	std::cout << ss.good() << std::endl;
	std::cout << ss.bad() << std::endl;
	std::cout << ss.rdstate() << std::endl;
	std::cout << nInt << std::endl;
	ss.clear();

	std::cout << "float" << std::endl;
	ss >> fFloat;
	ss << argv[1];
	std::cout << ss.fail() << std::endl;
	std::cout << ss.good() << std::endl;
	std::cout << ss.bad() << std::endl;
	std::cout << ss.rdstate() << std::endl;
	std::cout << fFloat << std::endl;
	ss.clear();

	std::cout << "Double" << std::endl;
	ss << argv[1];
	ss >> dDouble;
	std::cout << ss.fail() << std::endl;
	std::cout << ss.good() << std::endl;
	std::cout << ss.bad() << std::endl;
	std::cout << ss.rdstate() << std::endl;
	std::cout << dDouble << std::endl;*/
}