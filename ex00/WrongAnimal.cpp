#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& right)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = right;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& right)
{
    if (this != &right)
        this->type = right.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal generic sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}