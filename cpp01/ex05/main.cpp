#include "Harl.hpp"

int main()
{
	Harl	harl;

	std::cout <<  "<----------------------------------------------->\n";
	harl.complain("DEBUG");
	std::cout <<  "<----------------------------------------------->\n";
	harl.complain("INFO");
	std::cout <<  "<----------------------------------------------->\n";
	harl.complain("WARNING");
	std::cout <<  "<----------------------------------------------->\n";
	harl.complain("ERROR");
	std::cout <<  "<----------------------------------------------->\n";
}
