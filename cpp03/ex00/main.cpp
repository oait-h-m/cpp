#include "ClapTrap.hpp"

int main()
{
    ClapTrap user1("player1");
    
    user1.attack("Enemy");
    user1.takeDamage(3);
    user1.beRepaired(5);
    
    user1.takeDamage(20);
    user1.attack("Someone");
    
    return 0;

}
