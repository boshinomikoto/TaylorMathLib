#include <iostream>
#include <cmath>
#include "include/taylor.hpp"
#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862 

int main()
{
	std::cout << "================ SIN ================\n";
	std::cout << "sin(0)      = " << sinnx(0) << '\n';
	std::cout << "sin(PI/4)   = " << sinnx(PI / 4) << '\n';
	std::cout << "sin(PI)     = " << sinnx(PI) << '\n';

	std::cout << "\n================ COS ================\n";
	std::cout << "cos(0)      = " << cosnx(0) << '\n';
	std::cout << "cos(PI/4)   = " << cosnx(PI / 4) << '\n';
	std::cout << "cos(PI)     = " << cosnx(PI) << '\n';

	std::cout << "\n================ TAN ================\n";
	std::cout << "tan(0)      = " << tgnx(0) << '\n';
	std::cout << "tan(PI/6)   = " << tgnx(PI / 6) << '\n';
	std::cout << "tan(PI/4)   = " << tgnx(PI / 4) << '\n';

	std::cout << "\n=============== CTAN ===============\n";
	std::cout << "ctan(PI/4)  = " << сtgnx(PI / 4) << '\n';
	std::cout << "ctan(PI/3)  = " << сtgnx(PI / 3) << '\n';
	std::cout << "ctan(PI)    = " << сtgnx(PI) << '\n';

	std::cout << "\n============== ARCSIN ==============\n";
	std::cout << "arcsin(-1)  = " << arcsinnx(-1) << '\n';
	std::cout << "arcsin(0)   = " << arcsinnx(0) << '\n';
	std::cout << "arcsin(0.5) = " << arcsinnx(0.5) << '\n';

	std::cout << "\n============== ARCCOS ==============\n";
	std::cout << "arccos(-1)  = " << arccosnx(-1) << '\n';
	std::cout << "arccos(0)   = " << arccosnx(0) << '\n';
	std::cout << "arccos(0.5) = " << arccosnx(0.5) << '\n';

	std::cout << "\n============== ARCTAN ==============\n";
	std::cout << "arctan(-1)      = " << arctgnx(-1.0) << '\n';
	std::cout << "arctan(0)       = " << arctgnx(0.0) << '\n';
	std::cout << "arctan(sqrt(3)) = " << arctgnx(sqrt(3.0)) << '\n';

	std::cout << "\n============= ARCCTAN ==============\n";
	std::cout << "arcctan(-1)      = " << arcсtgnx(-1.0) << '\n';
	std::cout << "arcctan(0)       = " << arcсtgnx(0.0) << '\n';
	std::cout << "arcctan(sqrt(3)) = " << arcсtgnx(sqrt(3.0)) << '\n';

	std::cout << "\n=============== POWER ==============\n";
	std::cout << "power(2, 5)  = " << power(2, 5) << '\n';
	std::cout << "power(3, 4)  = " << power(3, 4) << '\n';
	std::cout << "power(10, 3) = " << power(10, 3) << '\n';

	std::cout << "\n=============== POWER ==============\n";
	std::cout << "power(2, 5)  = " << power(2, 5) << '\n';
	std::cout << "power(3, 4)  = " << power(3, 4) << '\n';
	std::cout << "power(10, 3) = " << power(10, 3) << '\n';

	std::cout << "\n=============== FORMULAS ==============\n";
	std::cout << "sin2(PI/16)      = " << sinnx((PI / 16) * 2) << '\n';
	std::cout << "2sin(PI/16)cos(PI/16)   = " << 2 * sinnx(PI / 16) * cosnx(PI / 16) << '\n';
	std::cout << "cos(2*PI/7)     = " << cosnx(2 * PI / 7) << '\n';
	std::cout << "1-2sin^2(PI/7)     = " << 1 - 2 * sinnx(PI / 7) * sinnx(PI / 7) << '\n';
	return 0;
}