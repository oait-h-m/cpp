#include "Zombie.hpp"

Zombie::Zombie(std::string zomName)
{
	name = zomName;
}

Zombie::~Zombie()
{
	std::cout << "Zombie died..." << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
