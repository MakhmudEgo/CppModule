//
// Created by Mahmud Jego on 12/13/20.
//

#include "PhoneBook.hpp"
#include <iomanip>

void PhoneBook::setContact(const std::string& str, const int &index) {
	this->_InputData[index] = str;
}

void PhoneBook::getContact(const size_t& isFull, const size_t& input) const {
	if (isFull && input < PhoneBook::_AmountContacts)
		this->_ContactList[input].getContact(input, isFull);
	if (!isFull) {
		size_t index = 0;
		if (PhoneBook::_AmountContacts)
		{
			std::cout << std::right << std::setw(10) << "index" << "|"
					  << std::right << std::setw(10) << "First Name" << "|"
					  << std::right << std::setw(10) << "Last Name" << "|"
					  << std::right << std::setw(10) << "Nick Name" << std::endl;
		}
		while (index < PhoneBook::_AmountContacts) {
			this->_ContactList[index].getContact(index, 0);
			index++;
		}
		if (!index)
			std::cout << "Empty PhoneBook" << std::endl;
	}
}

size_t PhoneBook::_AmountContacts = 0;

void PhoneBook::incAmountContacts() {
	_AmountContacts++;
}

void PhoneBook::addContactInPhoneBook() {
	this->_ContactList[PhoneBook::_AmountContacts].setContact(this->_InputData);
}

size_t &PhoneBook::getAmountContacts() {
	return _AmountContacts;
}

