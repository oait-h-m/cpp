#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include "contact.hpp"

class PhoneBook
{
private:
	Contact contact[8];
	int	count;
	int	index;
public:
	void	NewContact();
	void	Search();

	PhoneBook();

};

#endif
