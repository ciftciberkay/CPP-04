#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{    
    const Animal* animals[4];
    std::cout << "-------------------------" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        animals[i] = new Dog();
    }
    std::cout << "-------------------------" << std::endl;
    for (int i = 2; i < 4; i++)
    {
        animals[i] = new Cat();
    }
    std::cout << "-------------------------" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }
    std::cout << "-------------------------" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }    
    return 0;
}