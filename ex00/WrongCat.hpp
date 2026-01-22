#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& right);
    WrongCat& operator=(const WrongCat& right);
    ~WrongCat();
    void makeSound() const;
};

#endif