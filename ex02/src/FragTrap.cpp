#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap("", F_HIT_POINTS, F_ENERGY_POINTS, F_ATTACK_DAMAGE) {
	if (MESSAGE)
		std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name, F_HIT_POINTS, F_ENERGY_POINTS, F_ATTACK_DAMAGE) {
	if (MESSAGE)
		std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	if (MESSAGE)
		std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	if (MESSAGE)
		std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap() {
	if (MESSAGE)
		std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0) {
		std::cout << "FragTrap " << this->_name << " attacks "
				  << target << ", causing " << this->_attackDamage
				  << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "FragTrap " << this->_name <<
				  " has no energy points left to attack" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "HIGH FIVES GUYS ? :))" << std::endl;
}