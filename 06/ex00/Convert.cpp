//
// Created by Mahmud Jego on 1/26/21.
//

#include "Convert.hpp"

Convert::Convert(const std::string &szData)
: _szData(szData), _valid(true), _char(0), _int(0), _float(0), _double(0)
{
	this->_type = this->getType();
	if (this->_type != STOP)
	{
		if ((this->_type == FAIL || this->checkOverflows())) {
			this->_valid = false;
			std::cerr << "Type Not Defined" << std::endl;
			return;
		}
		switch (this->_type) {
			case CHAR:
				this->_char = this->_szData.c_str()[0];
				break;
			case INT:
				this->_int = std::stoi(this->_szData);
				break;
			case FLOAT:
				this->_float = std::stof(this->_szData);
				break;
			case DOUBLE:
				this->_double = std::stod(this->_szData);
				break;
		}
	}
}

/*Convert::Convert(const Convert &convert)
: _szData(convert._szData), _valid(convert._valid)
{}

Convert &Convert::operator=(const Convert &convert)
{
	if (this != &convert)
	{
		this->_valid = convert._valid;
	}
	return (*this);
}*/

Convert::~Convert()
{}

void Convert::toFloat()
{
	if (_valid && this->_type != STOP)
	{
		std::stringstream ss;

		std::cout << "float: ";
		if (this->_type == DOUBLE)
		{
			ss << this->_double;
			ss >> this->_float;
			this->_float = 0;
			if (ss.fail())
			{
				std::cout << "impossible" << std::endl;
			}
		}
		if (!ss.fail())
		{
			switch (this->_type)
			{
				case CHAR:
					std::cout << std::fixed << std::setprecision(1)
					<< static_cast<float >(this->_char) << std::endl;
					break ;
				case INT:
					std::cout << std::fixed << std::setprecision(1) << static_cast<float >(this->_int);
					break ;
				case DOUBLE:
					this->_float = static_cast<float >(this->_double);
					if (this->_float == roundf(this->_float))
						std::cout << std::fixed << std::setprecision(1) << this->_float;
					else
						std::cout << this->_double;
					break ;
				case FLOAT:
					if (this->_float == round(this->_float))
						std::cout << std::fixed << std::setprecision(1) << this->_float;
					else
						std::cout << this->_float;
					break ;
			}
			std::cout << 'f' << std::endl;
		}
	}
}

void Convert::toDouble()
{
	if (_valid && this->_type != STOP)
	{
		std::cout << "double: ";
		switch (this->_type)
		{
			case CHAR:
				std::cout << std::fixed << std::setprecision(1) << static_cast<double >(this->_char) << std::endl;
				break ;
			case INT:
				std::cout << std::fixed << std::setprecision(1) << static_cast<double >(this->_int) << std::endl;
				break ;
			case FLOAT:
				this->_double = static_cast<double >(this->_float);
				if (this->_double == round(this->_double))
					std::cout << std::fixed << std::setprecision(1) << this->_double << std::endl;
				else
					std::cout << this->_double << std::endl;
				break ;
			case DOUBLE:
				if (this->_double == round(this->_double))
					std::cout << std::fixed << std::setprecision(1) << this->_double << std::endl;
				else
					std::cout << this->_double << std::endl;
				break ;
		}
	}
}

void Convert::toInt()
{
	if (_valid && this->_type != STOP)
	{
		bool bNotFail = true;

		std::cout << "int: ";
		if (this->_type == DOUBLE || this->_type == FLOAT)
		{
			try {
				this->_int = std::stoi(this->_szData);
			}
			catch (std::exception &e) {
				std::cout << "impossible" << std::endl;
				bNotFail = false;
			}
		}
		if (bNotFail)
		{
			switch (this->_type)
			{
				case CHAR:
					std::cout << static_cast<int >(this->_char) << std::endl;
					break;
				case INT:
					std::cout << this->_int << std::endl;
					break;
				case DOUBLE:
					this->_int = static_cast<int >(this->_double);
					std::cout << this->_int << std::endl;
					break;
				case FLOAT:
					std::cout << this->_int << std::endl;
					break;
			}
		}
	}
}

void Convert::toChar()
{
	if (_valid && this->_type != STOP)
	{
		std::stringstream ss;

		std::cout << "char: ";
		if (this->_type != CHAR)
		{
			try {
				this->_int = std::stoi(this->_szData);
			}
			catch (std::exception &e){
				this->_int = 500;
			}
			if (ss.fail() || this->_int > 127 || this->_int < -128)
			{
				this->_int = 500;
				std::cout << "impossible" << std::endl;
			}
		}
		if (this->_int != 500)
		{
			switch (this->_type)
			{
				case DOUBLE:
					this->_char = static_cast<char >(this->_double);
					break;
				case FLOAT:
					std::cout << this->_int << std::endl;
					break;
				default:
					this->_char = static_cast<char >(this->_int);
			}
			if (isprint(this->_char))
			{
				std::cout << this->_char << std::endl;
			}
			else
			{
				std::cout << "Non displayable" << std::endl;
			}
		}
		if (this->_type == INT)
		{
			this->_int = std::stoi(this->_szData);
		}
	}
}

int Convert::getType()
{
	if (this->checkStrRes())
	{
		return (STOP);
	}
	size_t i = 0;
	while ((i < this->_szData.length() && isdigit(this->_szData[i]))
	|| (i == 0 && i < this->_szData.length() && this->_szData[0] == '-'))
	{
		i++;
	}
	if (i && i == this->_szData.length())
	{
		return (INT);
	}
	if (this->_szData[i] == '.')
	{
		i++;
		while ((i < this->_szData.length() && isdigit(this->_szData[i]))
		|| (i == 0 && i < this->_szData.length() && this->_szData[0] == '-'))
		{
			i++;
		}
		if (this->_szData[i] == 'f')
		{
			if (i + 1 != this->_szData.length())
			{
				return (FAIL);
			}
			std::string hello;
			this->_szData[this->_szData.length() - 1] = '0';
			return (FLOAT);
		}
		return (DOUBLE);
	}
	if (this->_szData.length() == 1 && isascii(this->_szData[0]))
	{
		return (CHAR);
	}
	return (FAIL);
}

bool Convert::checkOverflows()
{
	if (this->_type == INT)
	{
		int i;
		std::stringstream ss;
		ss << this->_szData;
		ss >> i;
		if (ss.fail())
		{
			return (true);
		}
	}
	if (this->_type == FLOAT)
	{
		float i;
		std::stringstream ss;
		ss << this->_szData;
		ss >> i;
		this->_szData[this->_szData.length() - 1] = 'f';
		if (ss.fail())
		{
			return (true);
		}
	}
	if (this->_type == DOUBLE)
	{
		double i;
		std::stringstream ss;
		ss << this->_szData;
		ss >> i;
		if (ss.fail())
		{
			return (true);
		}
	}
	return (false);
}

bool Convert::checkStrRes()
{
	const std::string szAlpData[6] = {"nanf", "-inff", "+inff", "nan", "-inf", "+inf"};
	for (int i = 0; i < 6; ++i)
	{
		if(szAlpData[i] == this->_szData && i < 3)
		{
			std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl
			<< "float: " << szAlpData[i] << std::endl
			<< "double: " << szAlpData[i + 3] << std::endl;
			return (true);
		}
		if(szAlpData[i] == this->_szData)
		{
			std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl
			<< "float: " << szAlpData[i - 3] << std::endl
			<< "double: " << szAlpData[i] << std::endl;
			return (true);
		}
	}
	return (false);
}
