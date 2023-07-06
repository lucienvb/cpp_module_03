#include <ClapTrap.hpp>

ClapTrap::ClapTrap(std::string name) {
	if (MESSAGE)
		std::cout << "Default constructor called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
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
		" has no energy points left to attack " << std::endl;
}

void	ClapTrap::logEnergyPoints(void) {
	std::cout << "ClapTrap "<< this->_name <<
	" remaining energy points are " << this->_energyPoints
	<< std::endl;
}
