
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap test("sergiu");

	test.guardGate();
	test.attack("Sergiu");
	return (0);
}
