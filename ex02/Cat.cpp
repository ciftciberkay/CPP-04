#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& right) : Animal(right)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->brain = new Brain(*right.brain);
}

Cat& Cat::operator=(const Cat& right)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &right)
    {
        Animal::operator=(right);
        delete this->brain;
        this->brain = new Brain(*right.brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miyav" << std::endl;
}