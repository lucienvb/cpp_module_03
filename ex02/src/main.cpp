#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int	main(void) {
	FragTrap	Jan("Jan");

	Jan.takeDamage(5);
	Jan.takeDamage(3);
	Jan.attack("Han");
	Jan.logHitPoints();
	Jan.beRepaired(4);
	Jan.logEnergyPoints();
	Jan.logHitPoints();
	Jan.highFivesGuys();
//	system("leaks scav");
	return (0);
}