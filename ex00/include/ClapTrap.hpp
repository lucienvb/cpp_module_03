#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

// DEFINES
#define MESSAGE 0

// INCLUDES
#include <iostream>

class	ClapTrap {
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);

	ClapTrap& operator=(const ClapTrap& other);

	void	attack(const std::string& target);
	void	logEnergyPoints(void);

	~ClapTrap();

private:
	std::string	_name;
	uint64_t	_hitPoints;
	uint64_t	_energyPoints;
	uint64_t	_attackDamage;
};

#endif
