#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int	main(void) {
	ScavTrap	Jan("Jan");

	Jan.takeDamage(5);
	Jan.takeDamage(3);
	Jan.attack("Han");
	Jan.logHitPoints();
	Jan.beRepaired(4);
	Jan.logEnergyPoints();
	Jan.logHitPoints();
	Jan.guardGate();
//	system("leaks scav");
	return (0);
}