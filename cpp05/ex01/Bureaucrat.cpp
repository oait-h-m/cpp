#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &input, int grade) : name(input), grade(grade) 
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
        	throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string    Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void    Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw GradeTooHighException();
	--grade;
}

void    Bureaucrat::decrementGrade()
{
	if (grade >= 150)
		throw GradeTooLowException();
	++grade;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}
void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		 std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << getName() << " couldn't sign " << form.getName()
                  << " because " << e.what() << std::endl;
	}
}
