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
		if (this->_type == DOUBLE)
		{
			std::stringstream ss;
			ss << this->_double;
			ss >> this->_float;
			if (ss.fail())
			{
				std::cout << "char: impossible" << std::endl
				<< "int: impossible"
				<< "float: impossible"
				<<"double: "<< this->_double;
				this->_type = STOP;
			}
		}
		if (this->_type != STOP)
		{
			std::cout << "float: ";
			switch (this->_type)
			{
				case CHAR:
					std::cout << std::fixed << std::setprecision(1)
					<< static_cast<float >(this->_char) << std::endl;
					break ;
				case INT:
					std::cout << std::fixed << std::setprecision(1) << static_cast<float >(this->_int) << std::endl;
					break ;
				case DOUBLE:
					this->_float = static_cast<float >(this->_double);
					if (this->_float == roundf(this->_float))
						std::cout << std::fixed << std::setprecision(1) << this->_float << std::endl;
					else
						std::cout << this->_double << std::endl;
					break ;
				case FLOAT:
					if (this->_float == round(this->_float))
						std::cout << std::fixed << std::setprecision(1) << this->_float << std::endl;
					else
						std::cout << this->_float << std::endl;
					break ;
			}
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

	}
}

void Convert::toChar()
{
	if (_valid && this->_type != STOP)
	{

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
