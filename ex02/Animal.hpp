#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal& right);
    Animal& operator=(const Animal& right);
    virtual ~Animal();
    virtual void makeSound() const = 0; 
    std::string getType() const;
};

#endif