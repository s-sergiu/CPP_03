
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"ScavTrap initialized!"<<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap destroyed!"<<std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout<<"ScavTrap is now in gatekeeper mode!"<<std::endl;
}
