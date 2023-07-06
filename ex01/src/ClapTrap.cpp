#include <ClapTrap.hpp>

ClapTrap::ClapTrap(std::string name) {
	if (MESSAGE)
		std::cout << "Default constructor called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) {
	_name = name;
	_hitPoints = hitPoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	if (MESSAGE)
		std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	if (MESSAGE)
		std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	if (MESSAGE)
		std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks "
				  << target << ", causing " << this->_attackDamage
				  << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name <<
		" has no energy points left to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " took "
		<< amount << " points of damage" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name <<
				  " is already dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0) {
		std::cout << "ClapTrap " << this->_name
		<< " is repaired for an amount of " << amount
		<< std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
	else
		std::cout << "ClapTrap " << this->_name <<
				  " has no energy points left to be repaired" << std::endl;
}

void	ClapTrap::logEnergyPoints(void) {
	std::cout << "ClapTrap "<< this->_name <<
	" remaining energy points are " << this->_energyPoints
	<< std::endl;
}

void	ClapTrap::logHitPoints(void) {
	std::cout << "ClapTrap "<< this->_name <<
	" remaining hit points are " << this->_hitPoints
	<< std::endl;
}
