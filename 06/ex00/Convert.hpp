//
// Created by Mahmud Jego on 1/26/21.
//

#ifndef CONVERT_HPP
#define CONVERT_HPP

#define FAIL 0
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define STOP 5

# include <iostream>
# include <sstream>
# include <iomanip>
# include <cmath>

class Convert {
public:
	Convert(const std::string& szData);
	Convert(const Convert&);
	Convert& operator=(const Convert&);
	~Convert();
	void toFloat();
	void toDouble();
	void toInt();
	void toChar();

private:
	int getType();
	bool checkOverflows();
	bool checkStrRes();
	std::string _szData;
	bool _valid;
	int _type;

	char _char;
	int _int;
	float _float;
	double _double;
};


#endif //CONVERT_HPP
