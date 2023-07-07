#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap("", HIT_POINTS, ENERGY_POINTS, ATTACK_DAMAGE) {
	if (MESSAGE)
		std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, HIT_POINTS, ENERGY_POINTS, ATTACK_DAMAGE) {
	if (MESSAGE)
		std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	if (MESSAGE)
		std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	if (MESSAGE)
		std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	if (MESSAGE)
		std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0) {
		std::cout << "ScavTrap " << this->_name << " attacks "
				  << target << ", causing " << this->_attackDamage
				  << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ScavTrap " << this->_name <<
				  " has no energy points left to attack" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is now in Gate keeper mode"
	<< std::endl;
}
