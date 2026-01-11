#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
	index = 0;
}

void	PhoneBook::NewContact()
{
	std::string	input;
	if (index >= 8)
		index = 0;
	while(true)
	{
		std::cout << "Enter your first name: ";
		std::getline(std::cin, input);
	    
		if (std::cin.eof())  
		{
			return;
		}
		if (input.empty())
		{
			std::cout << "Oops! You forgot to enter a first name. Try again:\n";
		}
		else
		{
			contact[index].SetFirstName(input);
			break;
		}
	}

	while(true)
	{
		std::cout << "Enter your last name: ";
		std::getline(std::cin, input);

		if (std::cin.eof())  
		{
			return;
		}
		if (input.empty())
		{
			std::cout << "Oops! You forgot to enter a last name. Try again:\n";
		}
		else
		{
			contact[index].SetLastName(input);
			break;
		}
	}

	while(true)
	{
		std::cout << "Enter your Nickname: ";
		std::getline(std::cin, input);

		if (std::cin.eof())  
		{
			return;
		}
		if (input.empty())
		{
			std::cout << "Oops! You forgot to enter a Nickname. Try again:\n";
		}
		else
		{
			contact[index].SetNickname(input);
			break;
		}
	}

	while(true)
	{
		std::cout << "Enter your Phone number: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			return;
		}
		else if (input.empty())
		{
			std::cout << "Oops! You forgot to enter a Phone number. Try again:\n";
		}
		else
		{
			contact[index].SetPhoneNumber(input);
			break;
		}
	}

	while(true)
	{
		std::cout << "Enter your Dark secret: ";
		std::getline(std::cin, input);

		if (std::cin.eof())  
		{
			return;
		}
		if (input.empty())
		{
			std::cout << "Oops! You forgot to enter a Dark Secret. Try again:\n";
		}
		else
		{
			contact[index].SetDarkestSecret(input);
			break;
		}
	}
	count++;
	index++;
}

std::string	FormatColumn(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	return str;
}


void	PrintSeparator()
{
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}


void DisplayContacts(Contact contacts[], int MaxSize)
{
	PrintSeparator();
    
	std::cout << "|" << std::setw(10) << "Index" 
	      << "|" << std::setw(10) << "First Name"
	      << "|" << std::setw(10) << "Last Name"
	      << "|" << std::setw(10) << "Nickname" 
	      << "|" << std::endl;
    
	PrintSeparator();
    
	if (MaxSize > 8)
		MaxSize = 8;
	for (int i = 0; i < MaxSize; i++)
	{
		std::cout << "|" << std::setw(10) << i
			  << "|" << std::setw(10) << FormatColumn(contacts[i].GetFirstName())
			  << "|" << std::setw(10) << FormatColumn(contacts[i].GetLastName())
			  << "|" << std::setw(10) << FormatColumn(contacts[i].GetNickname())
			  << "|" << std::endl;
	}
    
	PrintSeparator();
}

void	PhoneBook::Search()
{
	std::string	idx;
	short		nIdx;

	DisplayContacts(contact, count);

	while (true)
	{
		std::cout << "Which contact would you like to see? Enter index: ";
		getline(std::cin, idx);
		if (std::cin.eof())
		{
			return;
		}
		if (idx.length() > 1 || idx.empty())
		{
			std::cout << "Invalid index. Please enter a number between 0 and 7.\n";
		}
		else
		{
			nIdx = idx[0] - '0';
			if (contact[nIdx].GetFirstName().empty())
			{
				std::cout << "No contact found at this index.\n";
			}
			else
			{
				std::cout << "Displaying contact information...\n";
				std::cout << "First name: " << contact[nIdx].GetFirstName() << std::endl;
				std::cout << "Last name: " << contact[nIdx].GetLastName() << std::endl;
				std::cout << "Nickname: " << contact[nIdx].GetNickname() << std::endl;
				std::cout << "Phone number: " << contact[nIdx].GetPhoneNumber() << std::endl;
				std::cout << "Dark secret: " << contact[nIdx].GetDarkestSecret() << std::endl;
				break;
			}
		}
	}
}
