#include "Zombie.hpp"

int main()
{
	Zombie *obj;
	randomChump("stack name\n");

	obj = newZombie("heap: ");
	delete obj;
}
