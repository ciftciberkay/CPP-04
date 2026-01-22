#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& right) : Animal(right)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = right;
}

Cat& Cat::operator=(const Cat& right)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &right)
        Animal::operator=(right);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miyav" << std::endl;
}