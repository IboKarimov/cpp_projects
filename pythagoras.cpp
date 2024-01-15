#include <iostream>
#include <cmath>
 
int main() {
	std::cout << "Welcome to pythagoras calculator" << std::endl;

	std::cout << "Enter side a: ";
	float a;
	std::cin >> a;
	if (!(std::cin >> a) || a <= 0)
	{
		std::cout << "Invalid input for vairable a. Try again" << std::endl;
		return 1;
	}

	std::cout << "Enter side b: ";
	float b;
	std::cin >> b;
	if (!(std::cin >> b) || b <= 0)
	{
		std::cout << "Invalid input for vairable b. Try again" << std::endl;
		return 1;
	}

	float c = sqrt(pow(a, 2) + pow(b, 2));
	std::cout << "Hypotenus is: " << c;

	return 0;
}
