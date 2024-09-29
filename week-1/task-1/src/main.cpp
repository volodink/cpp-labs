#include <iostream>
#include "User.hpp"

int main() {
	User* user = new User();
	std::cout << user->getName() << std::endl;
	user->setName("Ivan Returnovich");
	std::cout << user->getName() << std::endl;
	return 0;
}
