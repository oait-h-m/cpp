#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    Intern intern;

    AForm *f1 = intern.makeForm("robotomy request", "Bender");
    AForm *f2 = intern.makeForm("shrubbery creation", "Home");
    AForm *f3 = intern.makeForm("presidential pardon", "Arthur Dent");
    AForm *invalid = intern.makeForm("coffee making", "Nobody");


    delete f1;
    delete f2;
    delete f3;
    delete invalid;

    return 0;
}