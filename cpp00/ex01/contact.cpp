#include "contact.hpp"

void	Contact::SetFirstName(std::string input)
{
	this->FirstName = input;
}

std::string	Contact::GetFirstName()
{
	return FirstName;
}

void	Contact::SetLastName(std::string input)
{
	this->LastName = input;
}

std::string	Contact::GetLastName()
{
	return LastName;
}

void	Contact::SetNickname(std::string input)
{
	this->Nickname = input;
}

std::string	Contact::GetNickname()
{
	return Nickname;
}

void	Contact::SetDarkestSecret(std::string input)
{
	this->DarkestSecret = input;
}

std::string	Contact::GetDarkestSecret()
{
	return DarkestSecret;
}

void	Contact::SetPhoneNumber(std::string input)
{
	this->PhoneNumber = input;
}

std::string	Contact::GetPhoneNumber()
{
	return PhoneNumber;
}
