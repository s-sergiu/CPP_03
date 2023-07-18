
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	Name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout<<"Claptrap initialized!"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	Name = copy.Name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	this->Name = src.Name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Claptrap destroyed!"<<std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout<<"ClapTrap "<<Name<<" attacks ";
		std::cout<<target<<", causing "<<attackDamage;
		std::cout<<" points of damage!"<<std::endl;
		hitPoints -= attackDamage;
		energyPoints--;
	}
	else if (energyPoints <= 0)
	{
		std::cout<<"ClapTrap "<<Name;
		std::cout<<" no energy left!"<<std::endl;
	}
	else if (hitPoints <= 0)
	{
		std::cout<<"ClapTrap "<<Name;
		std::cout<<" is dead!"<<std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout<<"ClapTrap "<<Name;
		std::cout<<" takes "<<amount<<" points of damage!";
		std::cout<<std::endl;
		hitPoints -= amount;
	}
	else if (energyPoints <= 0)
	{
		std::cout<<"ClapTrap "<<Name;
		std::cout<<" no energy left!"<<std::endl;
	}
	else if (hitPoints <= 0)
	{
		std::cout<<"ClapTrap "<<Name;
		std::cout<<" is dead!"<<std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout<<"ClapTrap "<<Name;
		std::cout<<" repairs "<<amount<<" hitpoints!";
		std::cout<<std::endl;
		hitPoints += amount;
		energyPoints--;
	}
	else if (energyPoints <= 0)
	{
		std::cout<<"ClapTrap "<<Name;
		std::cout<<" no energy left!"<<std::endl;
	}
	else if (hitPoints <= 0)
	{
		std::cout<<"ClapTrap "<<Name;
		std::cout<<" is dead!"<<std::endl;
	}
}
