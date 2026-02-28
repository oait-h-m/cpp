#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) {}

Intern	&Intern::operator=(const Intern &other)
{
	return *this;
}

Intern::~Intern() {}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{

	std::cout << "Intern cannot create " << name << " because it is unknown." << std::endl;
	return NULL;
}
