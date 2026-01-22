#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& right);
    Cat& operator=(const Cat& right);
    ~Cat();
    void makeSound() const;
};

#endif