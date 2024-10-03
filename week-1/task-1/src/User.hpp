#include <iostream>
#include <string>


class User {
    private:
        std::string name;
    public:
        std::string getName();
        void setName(std::string name);
        User();
        User(std::string name);
};