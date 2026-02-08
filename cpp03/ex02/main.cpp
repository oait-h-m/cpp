#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Bomber");
    
    frag.attack("Enemy");
    frag.takeDamage(20);
    frag.beRepaired(15);
    frag.highFivesGuys();
    
    return 0;

}
