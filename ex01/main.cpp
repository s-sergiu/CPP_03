
#include "ClapTrap.hpp"

int main(void)
{

	ClapTrap test("Sergiu");
	ClapTrap test1("Azer");

	test1.attack("Sergiu");
	test1.attack("Sergiu");
	test1.attack("Sergiu");
	test1.attack("Sergiu");
	test1.attack("Sergiu");
	test1.attack("Sergiu");
	test1.attack("Sergiu");
	test1.attack("Sergiu");
	test1.beRepaired(20);
	test1.takeDamage(10);
	test1.takeDamage(19);
	test1.beRepaired(20);
	return (0);
}
