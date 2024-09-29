#include "User.hpp"

std::string User::getName() {
    return name;
}

void User::setName(std::string name) {
    this->name = name;
}

User::User(std::string name) {
    this->name = name;
}

User::User() {}
