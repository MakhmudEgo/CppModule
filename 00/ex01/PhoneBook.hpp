//
// Created by Mahmud Jego on 12/13/20.
//

#ifndef EX01_PHONEBOOK_HPP
# define EX01_PHONEBOOK_HPP

# include <iostream>
# include "Contacts.hpp"

class PhoneBook {
private:
	Contacts		_ContactList[8];
	std::string		s[11]; // = new std::string[11];
	static size_t	_AmountContacts;
public:
	PhoneBook();
	static void	incAmountContacts();
	static size_t & getAmountContacts();
	void		addContactInPhoneBook();
	void		setContact(const std::string&, const int& index);
	void		getContact(const size_t& isFull, const size_t& input) const;
};

#endif //EX01_PHONEBOOK_HPP
