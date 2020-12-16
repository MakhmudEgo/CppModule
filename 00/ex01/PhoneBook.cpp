//
// Created by Mahmud Jego on 12/13/20.
//

#include "PhoneBook.hpp"

void PhoneBook::setContact(const std::string& str, const int &index) {
	this->s[index] = str;
}

void PhoneBook::getContact(const int &i) {

}

PhoneBook::PhoneBook() {
}

size_t PhoneBook::_AmountContacts = 0;

void PhoneBook::incAmountContacts() {
	_AmountContacts++;
}
