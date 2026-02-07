#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap user1("player1");
    
    user1.attack("Enemy");
    user1.takeDamage(3);
    user1.beRepaired(5);
    
    user1.takeDamage(20);
    user1.attack("Someone");
    
    return 0;

}
