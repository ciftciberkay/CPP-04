#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{    
    const Animal* animals[4];
    std::cout << "-----------DOG--------------" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        animals[i] = new Dog();
    }
    std::cout << "-----------CAT--------------" << std::endl;
    for (int i = 2; i < 4; i++)
    {
        animals[i] = new Cat();
    }
    std::cout << "-----------DESC--------------" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }
    std::cout << "-------------------------" << std::endl;
    Dog minidog;
    {
        Dog temp = minidog;
    }    
    return 0;
}