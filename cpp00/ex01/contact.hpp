#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	DarkestSecret;
	std::string	PhoneNumber;
public:
	void	SetFirstName(std::string FirstName);
	std::string	GetFirstName();

	void	SetLastName(std::string FirstName);
	std::string	GetLastName();

	void	SetNickname(std::string FirstName);
	std::string	GetNickname();

	void	SetDarkestSecret(std::string FirstName);
	std::string	GetDarkestSecret();

	void	SetPhoneNumber(std::string FirstName);
	std::string	GetPhoneNumber();
};

#endif
