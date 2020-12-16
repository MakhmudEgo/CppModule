//
// Created by Mahmud Jego on 12/13/20.
//

#ifndef EX01_PHONEBOOK_HPP
# define EX01_PHONEBOOK_HPP

# include <iostream>
# include "Contacts.hpp"

class PhoneBook {
private:
	Contacts	_ContactList[8];
	std::string s[11]; // = new std::string[8];
	static size_t		_AmountContacts;
public:
	PhoneBook();
	static	void	incAmountContacts(void);
	void		setContact(const std::string&, const int& index);
	void		getContact(const int& i);
};

#endif //EX01_PHONEBOOK_HPP
