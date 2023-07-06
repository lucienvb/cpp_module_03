#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

// INCLUDES
#include <ClapTrap.hpp>

// DEFINES
#define MESSAGE 0
#define HIT_POINTS 100
#define ENERGY_POINTS 50
#define ATTACK_DAMAGE 20

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string name);
	~ScavTrap();

};

#endif
