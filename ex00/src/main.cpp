#include <ClapTrap.hpp>

int	main(void) {
	ClapTrap	Jan("Jan");

	Jan.takeDamage(5);
	Jan.takeDamage(3);
	Jan.logHitPoints();
	Jan.beRepaired(4);
	Jan.logEnergyPoints();
	Jan.logHitPoints();
	Jan.attack("Piet");
	Jan.logEnergyPoints();
//	system("leaks clap");

	return (0);
}