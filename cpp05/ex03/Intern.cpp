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

static	AForm* createShrubbery(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

static	AForm* createRobotomy(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

static	AForm* createPresidential(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
    const std::string formNames[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* (*functions[3])(const std::string &) = {
        &createShrubbery,
        &createRobotomy,
        &createPresidential
    };

    for (int i = 0; i < 3; ++i)
    {
        if (formNames[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return functions[i](target);
        }
    }

    std::cout << "Intern cannot create " << name << " because it is unknown." << std::endl;
    return NULL;
}