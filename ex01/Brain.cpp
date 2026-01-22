#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& right)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = right;
}

Brain& Brain::operator=(const Brain& right)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this != &right)
    {
        int i = 0;
        while (i < 100)
        {
            this->ideas[i] = right.ideas[i];
            i++;
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}