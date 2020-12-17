#include "PhoneBook.hpp"
#include <iomanip>
int main() {
	std::cout.width(5);
	std::cout << "1";
	std::cout << "123456789";
/*	PhoneBook Contacts;
	int index;
	int input;
	std::string cmd;
	std::string asks[11] = {
		"first name",
		"last name",
		"nickname",
		"login",
		"postal address",
		"email address",
		"phone number",
		"birthday date",
		"favorite meal",
		"underwear color",
		"darkest secret",
	};
	while (!(false))
	{
		std::cout << "Type The Command: ADD, SEARCH or EXIT" << std::endl << "->";
		std::cin >> cmd;
		index = 0;
		if (cmd == "ADD")
		{
			while (index != 11)
			{
				std::cout << asks[index] << std::endl << "->";
				std::cin >> cmd;
				Contacts.setContact(cmd, index);
				index++;
			}
			Contacts.addContactInPhoneBook();
			PhoneBook::incAmountContacts();
		}
		if (cmd == "EXIT")
			break ;
		if (cmd == "SEARCH")
		{
			Contacts.getContact();
			if (PhoneBook::getAmountContacts())
			{
				std::cout << "Type The Index" << std::endl << "->";
				std::cin >> input;
			}
		}
	}*/

	return 0;
}
