#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <ClapTrap.hpp>

// DEFINES
#define F_HIT_POINTS 100
#define F_ENERGY_POINTS 100
#define F_ATTACK_DAMAGE 30

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap& other);

	FragTrap&	operator=(const FragTrap& other);

	void	attack(const std::string& target);
	void	highFivesGuys(void);

	~FragTrap();
};

#endif
