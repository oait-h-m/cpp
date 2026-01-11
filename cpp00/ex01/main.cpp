#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
	std::string cmd;
	PhoneBook	ob;

	while (true)
	{
		std::cout << "Available commands (ADD, SEARCH, EXIT) Enter command: ";
		getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << "\nExiting... See you later!\n";
			break;
		}
		if (cmd == "ADD")
		{
			ob.NewContact();
			if (std::cin.eof())
			{
				std::cout << "\nExiting... See you later!\n";
				break;
			}
			std::cout << "New contact has been saved.\n";
		}
		else if (cmd == "SEARCH")
		{
			ob.Search();
			if (std::cin.eof())
			{
				std::cout << "\nExiting... See you later!\n";
				break;
			}
		}
		else if (cmd == "EXIT")
		{
			std::cout << "\nExiting... See you later!\n";
			break;
		}
		else if (cmd.empty())
		{
			std::cout << "Command missing! Please enter it. \n";
		}
	}
}
