#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

// DEFINES
#define MESSAGE 1

// INCLUDES
#include <iostream>

class	ClapTrap {
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);

	ClapTrap& operator=(const ClapTrap& other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	logEnergyPoints(void);
	void	logHitPoints(void);

	~ClapTrap();

protected:
	std::string	_name;
	int 		_hitPoints;
	int 		_energyPoints;
	int 		_attackDamage;

	ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
};

#endif
