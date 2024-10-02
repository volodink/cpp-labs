#include <iostream>
#include <math.h>
#include "User.hpp"
#include "ariph.hpp"

int main() {
	User* user = new User();
	std::cout << user->getName() << std::endl;
	user->setName("Ivan Returnovich");
	std::cout << user->getName() << std::endl;
	std::cout << sin(0.1) << std::endl;
	std::cout << add(1, 2) << std::endl;
	return 0;
}
