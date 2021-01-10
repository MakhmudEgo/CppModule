//
// Created by Mahmud Jego on 1/9/21.
//

#include <iostream>
#include <fstream>
#include <sstream>
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "bad argc" << std::endl;
		return (-1);
	}

	// open file
	std::ifstream iFile(argv[1]);
	if (!iFile)
	{
		std::cout << "not open " << argv[1] << std::endl;
		return (-1);
	}

	// read from file
	std::ostringstream osS;
	osS << iFile.rdbuf();
	iFile.close();

	// write to a string
	std::string szSrc = osS.str();
	osS.clear();

	// replacement from s1 to s2
	for (int nRes; ((nRes = szSrc.find(argv[2])) != -1) ;)
	{
		szSrc.replace(szSrc.find(argv[2]), strlen(argv[2]), argv[3]);
	}

	// FILENAME
	std::string szOFileName(argv[1]);
	szOFileName += ".replace";

	// create file and write to a file
	std::ofstream ofRes(szOFileName);
	ofRes << szSrc;
	ofRes.close();

	return (0);
}