#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false),
	gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : name(other.name), isSigned(other.isSigned),
	gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

AForm	&AForm::operator=(const AForm &other)
{
	if (this != &other)
		isSigned = other.isSigned;
	return *this;
}

AForm::~AForm() {}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "AForm is not signed!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

std::string	AForm::getName() const
{
	return name;
}

bool	AForm::getIsSigned() const	
{
	return isSigned;
}

int	AForm::getGradeToSign() const
{
	return gradeToSign;
}

int	AForm::getGradeToExecute() const
{
	return gradeToExecute;
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= gradeToSign)
		isSigned = true;
	else
		throw GradeTooLowException();

}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (!isSigned)
        throw FormNotSignedException();
    if (executor.getGrade() > gradeToExecute)
        throw GradeTooLowException();
    executeAction(); 
}

std::ostream	&operator<<(std::ostream &out, const AForm &obj)
{
	out << obj.getName() << ", form signed: " 
		<< (obj.getIsSigned() ? "true" : "false")
		<< ", grade to sign: " << obj.getGradeToSign()
		<< ", grade to execute: " << obj.getGradeToExecute();
	return out;
}
