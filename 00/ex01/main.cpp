#include "PhoneBook.hpp"
#include <iomanip>

int main() {
	PhoneBook Contacts;
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
		"darkest secret"
	};
	while (cmd != "EXIT")
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
		if (cmd == "SEARCH")
		{
			Contacts.getContact(0, 0);
			if (PhoneBook::getAmountContacts())
			{
				std::cout << "Type The Index" << std::endl << "->";
				std::cin >> input;
				Contacts.getContact(1, input);
			}
		}
	}
	return 0;
}
