#include "PhoneBook.hpp"
#include <iomanip>

void	ifAdd(PhoneBook& Contacts, std::string& cmd)
{
	int index = 0;
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
	if (PhoneBook::getAmountContacts() != 8)
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
		return ;
	}
	std::cerr << "PhoneBook Full" << std::endl;
}

void	isSearch(PhoneBook& Contacts, std::string& cmd)
{
	Contacts.getContact(0, 0);
	if (PhoneBook::getAmountContacts())
	{
		int input = 0;
		while (!input){
			std::cout << "Type The Index From " << 1 << " to " << PhoneBook::getAmountContacts() << std::endl << "->";
			std::cin >> cmd;
			try {
				input = std::stoi(cmd);
				if (PhoneBook::getAmountContacts() < input || input <= 0)
				{
					std::cerr << "Invalid Index" << std::endl;
					Contacts.getContact(0, 0);
					input = 0;
				}
				Contacts.getContact(1, input - 1);
			}
			catch (std::invalid_argument &e) {
				std::cerr << "Invalid Input, Type Only Number" << std::endl;
				Contacts.getContact(0, 0);
			}
		}
	}
}

int main() {
	PhoneBook Contacts;
	std::string cmd;

	while (cmd != "EXIT")
	{
		std::cout << "Type The Command: ADD, SEARCH or EXIT" << std::endl << "->";
		std::cin >> cmd;
		if (cmd == "ADD")
			ifAdd(Contacts, cmd);
		if (cmd == "SEARCH")
			isSearch(Contacts, cmd);
	}
	return 0;
}
