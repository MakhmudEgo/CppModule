//
// Created by Mahmud Jego on 12/13/20.
//

#include "PhoneBook.hpp"

void PhoneBook::setContact(const std::string& str, const int &index) {
	this->s[index] = str;
}

void PhoneBook::getContact() const {
	size_t index = 0;
	while (index < PhoneBook::_AmountContacts)
	{
		_ContactList[index].getContact(index);
		index++;
	}
}

PhoneBook::PhoneBook() {
}

size_t PhoneBook::_AmountContacts = 0;

void PhoneBook::incAmountContacts() {
	_AmountContacts++;
}

void PhoneBook::addContactInPhoneBook() {
	this->_ContactList[PhoneBook::_AmountContacts].setContact(this->s);
}

size_t &PhoneBook::getAmountContacts() {
	return _AmountContacts;
}

