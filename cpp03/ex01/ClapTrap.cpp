#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unnamed"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string input) : name(input), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hitPoints(other.hitPoints),
      energyPoints(other.energyPoints),
      attackDamage(other.attackDamage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		energyPoints = other.energyPoints;
		hitPoints = other.hitPoints;
		 attackDamage = other.attackDamage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " is dead and cannot attack!" << std::endl;
		return;
	}
	if (energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target 
			<< ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ClapTrap " << name << " Can't attack because no energyPoints left" 
			<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
	else if (amount >= hitPoints)
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " damage and dies!" << std::endl;
		hitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " damage! HP remaining: " 
			<< hitPoints - amount << std::endl;
		hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " is dead and cannot repair!" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy to repair!" << std::endl;
		return;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount 
	          << " hit points! HP: " << hitPoints << std::endl;
}

