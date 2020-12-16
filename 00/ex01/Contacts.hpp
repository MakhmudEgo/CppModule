//
// Created by Mahmud Jego on 12/14/20.
//

#ifndef EX01_CONTACTS_HPP
# define EX01_CONTACTS_HPP
#include <iostream>

class Contacts {
private:
	std::string _FirstName;
	std::string _LastName;
	std::string _NickName;
	std::string _Login;
	std::string _PostalAddress;
	std::string _Email;
	std::string _Number;
	std::string _Birthday;
	std::string _FavoriteMeal;
	std::string _UnderwearColor;
	std::string _DarkestSecret;
public:
	void		setContact(const std::string& s, const int& i);
	void		getContact(const int& i) const;
};


#endif //EX01_CONTACTS_HPP
