#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862 
#include <cmath>
#include "taylor.hpp"

double power(long long a, long long n)
{
	double res = 1.0;
	while (n > 0)
	{
		if (n & 1) res = res * a;
		a *= a;
		n >>= 1;
	}
	return res;
}

double sinnx(double x)
{
	x = fmod(x, 2 * PI);
	double term = x;
	double sum = x;

	for (int i = 1; fabs(term) > 1e-15; i++)
	{
		term *= -x * x / (4 * i * i + 2 * i);
		sum += term;
	}
	if (sum < 1e-15)
		return 0;
	return sum;
}

double cosnx(double x)
{
	x = fmod(x, 2 * PI);
	double term = 1;
	double sum = 1;

	for (int i = 1; fabs(term) > 1e-15; i++)
	{
		term *= -x * x / (4 * i * i - 2 * i);
		sum += term;
	}
	return sum;
}

double tgnx(double x)
{
	double result = sinnx(x) / cosnx(x);
	return result;
}

double сtgnx(double x)
{
	double result = 1 / tgnx(x);
	return result;
}

double arcsinnx(double x)
{
	x = fmod(x, 2 * PI);

	if (x > 1.0 || x < -1.0) return NAN;
	if (x == 1.0) return PI / 2.0;
	if (x == -1.0) return -PI / 2.0;

	double term = x;
	double sum = x;

	for (int i = 1; fabs(term) > 1e-15; i++)
	{
		term *= ((4 * i * i - 4 * i + 1) * x * x) / (2 * i * (2 * i + 1));
		sum += term;
	}
	return sum;
}

double arccosnx(double x)
{
	double result = (PI / 2.0) - arcsinnx(x);
	return result;
}

double arctgnx(double x)
{
	if (std::abs(x) > 0.5)
	{
		// arctan(x) = 2 * arctan( x / (1 + sqrt(1 + x*x)) )
		double new_x = x / (1.0 + std::sqrt(1.0 + x * x));
		return 2.0 * arctgnx(new_x);
	}
	double term = x;
	double sum = x;

	for (int i = 1; i < 1000; i++)
	{
		term *= -x * x * (2.0 * i - 1) / (2.0 * i + 1);
		sum += term;
		if (fabs(term) < 1e-15) break;
	}
	return sum;
}
double arcсtgnx(double x)
{
	return PI / 2 - arctgnx(x);
}