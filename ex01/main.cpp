#include "contact.hpp"
#include "phonebook.hpp"

void	header()
{
	std::cout << "---------------------------------------------------------\n";
	std::cout << "|index	|First Name	|Last Name	|Nickname	|\n";
	std::cout << "---------------------------------------------------------\n";
}

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
		}
		else if (cmd == "EXIT")
		{
			break;
		}
		else if (cmd.empty())
		{
			std::cout << "Command missing! Please enter it. \n";
		}
	}
}
