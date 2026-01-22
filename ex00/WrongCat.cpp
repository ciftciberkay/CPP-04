#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& right) : WrongAnimal(right)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = right;
}

WrongCat& WrongCat::operator=(const WrongCat& right)
{
    if (this != &right)
        WrongAnimal::operator=(right);
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Miyav" << std::endl;
}