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
	ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);

	ClapTrap& operator=(const ClapTrap& other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	logEnergyPoints(void);
	void	logHitPoints(void);

	~ClapTrap();

private:
	std::string	_name;
	int 		_hitPoints;
	int 		_energyPoints;
	int 		_attackDamage;
};

#endif
