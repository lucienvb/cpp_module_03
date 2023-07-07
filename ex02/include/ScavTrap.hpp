#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

// INCLUDES
#include <ClapTrap.hpp>

// DEFINES
#define HIT_POINTS 100
#define ENERGY_POINTS 50
#define ATTACK_DAMAGE 20

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& other);

	ScavTrap&	operator=(const ScavTrap& other);

	void	attack(const std::string& target);
	void	guardGate(void);

	~ScavTrap();
};

#endif
