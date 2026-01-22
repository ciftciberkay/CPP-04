#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& right)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = right;
}

Animal& Animal::operator=(const Animal& right)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this != &right)
        this->type = right.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}