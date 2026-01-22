#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& right);
    Dog& operator=(const Dog& right);
    ~Dog();
    void makeSound() const;
};

#endif