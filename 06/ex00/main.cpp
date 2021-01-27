//
// Created by Mahmud Jego on 1/26/21.
//

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "bad argc" << std::endl;
		return (13);
	}

	Convert convert3(argv[1]);
	convert3.toChar();
	convert3.toInt();
	convert3.toFloat();
	convert3.toDouble();

	return (0);
}