#include "PhoneBook.hpp"

int main() {
	PhoneBook Contacts;
	int index;
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
		std::cout << "Type The Command: ADD, SEARCH or EXIT\n->";
		std::cin >> cmd;
		index = 0;
		if (cmd == "ADD")
		{
			while (index != 11)
			{
				std::cout << asks[index] << std::endl;
				std::cin >> cmd;
				Contacts.setContact(cmd, index);
				index++;
			}
			PhoneBook::incAmountContacts();
		}
	}

	return 0;
}
