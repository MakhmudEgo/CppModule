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

void Contacts::getContact(const size_t& index) const { // << std::left << std::setw(10)
	std::cout << std::right << std::setw(10) << index << "|"
	<< std::right << std::setw(10) << this->_FirstName << "|"
	<< std::right << std::setw(10) << this->_LastName << "|"
	<< this->_NickName << std::endl;
}
