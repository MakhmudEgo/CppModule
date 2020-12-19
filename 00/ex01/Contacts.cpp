//
// Created by Mahmud Jego on 12/14/20.
//

#include "Contacts.hpp"
#include <iomanip>

void Contacts::setContact(const std::string *arrData) {
	this->_FirstName = arrData[0];
	this->_LastName = arrData[1];
	this->_NickName = arrData[2];
	this->_Login = arrData[3];
	this->_PostalAddress = arrData[4];
	this->_Email = arrData[5];
	this->_Number = arrData[6];
	this->_Birthday = arrData[7];
	this->_FavoriteMeal = arrData[8];
	this->_UnderwearColor = arrData[9];
	this->_DarkestSecret = arrData[10];
}

void Contacts::getContact(const size_t& index, const size_t& isFull) const {// << std::left << std::setw(10)
	if (isFull)
	{
		std::cout <<
		"First Name" << std::endl <<
		this->_FirstName << std::endl <<
		"Last Name" << std::endl <<
		this->_LastName  << std::endl <<
		"Nick Name" << std::endl <<
		this->_NickName  << std::endl <<
		"Login" << std::endl <<
		this->_Login  << std::endl <<
		"Postal Address" << std::endl <<
		this->_PostalAddress  << std::endl <<
		"Email" << std::endl <<
		this->_Email  << std::endl <<
		"Number" << std::endl <<
		this->_Number  << std::endl <<
		"Birthday" << std::endl <<
		this->_Birthday  << std::endl <<
		"Favorite Meal" << std::endl <<
		this->_FavoriteMeal  << std::endl <<
		"Underwear Color" << std::endl <<
		this->_UnderwearColor  << std::endl <<
		"Darkest Secret" << std::endl <<
		this->_DarkestSecret  << std::endl;
	}
	else
		Contacts::printContactLite(this->_FirstName,
		this->_LastName, this->_NickName, index);
}

void Contacts::printContactLite(std::string _FirstName, std::string _LastName,
								std::string _NickName, const size_t &index) const {
	if (_FirstName.size() > 10)
	{
		_FirstName.resize(9);
		_FirstName.resize(10, '.');
	}
	if (_LastName.size() > 10)
	{
		_LastName.resize(9);
		_LastName.resize(10, '.');
	}
	if (_NickName.size() > 10)
	{
		_NickName.resize(9);
		_NickName.resize(10, '.');
	}
	std::cout << std::right << std::setw(10) << index + 1 << "|"
	<< std::right << std::setw(10) << _FirstName << "|"
	<< std::right << std::setw(10) << _LastName << "|"
	<< std::right << std::setw(10) << _NickName << std::endl;
}
