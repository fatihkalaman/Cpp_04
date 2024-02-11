#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& cpy);
        Dog &operator=(const Dog& obj);
        virtual void makeSound() const;
        Brain *getBrain() const;
};
