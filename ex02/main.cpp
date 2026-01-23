#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    /* Animal falseA;
    Animal* falseB = new Animal(); */

    const Animal* adog = new Dog();
    const Animal* acat = new Cat();
    std::cout << "-------------------------" << std::endl;
    std::cout << adog->getType() << " " << std::endl;
    std::cout << acat->getType() << " " << std::endl;
    std::cout << "-------------------------" << std::endl;
    adog->makeSound(); 
    acat->makeSound();
    std::cout << "-------------------------" << std::endl;
    delete adog;
    delete acat;
    std::cout << "-------------------------" << std::endl;
    Dog minidog;
    {
        Dog cpydog = minidog;
    }
    return 0;
}