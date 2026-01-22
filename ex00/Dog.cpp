#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& right) : Animal(right)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = right;
}

Dog& Dog::operator=(const Dog& right)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &right)
        Animal::operator=(right);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Havhav" << std::endl;
}