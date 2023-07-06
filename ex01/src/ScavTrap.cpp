#include <ScavTrap.hpp>

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, HIT_POINTS, ENERGY_POINTS, ATTACK_DAMAGE) {
	if (MESSAGE)
		std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	if (MESSAGE)
		std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	if (MESSAGE)
		std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is now in Gate keeper mode"
	<< std::endl;
}
