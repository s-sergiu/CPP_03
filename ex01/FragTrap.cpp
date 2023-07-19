
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"FragTrap initialized!"<<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap destroyed!"<<std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout<<"FragTrap wants to high five"<<std::endl;
}
