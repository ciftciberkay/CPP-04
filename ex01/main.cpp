#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{    
    const Animal* animals[4]; 
    for (int i = 0; i < 2; i++)
    {
        animals[i] = new Dog();
    }
    for (int i = 2; i < 4; i++)
    {
        animals[i] = new Cat();
    }
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }
    Dog basic;
    {
        Dog tmp = basic;
    }    
    std::cout << "End of Deep Copy Test Scope" << std::endl;
    return 0;
}