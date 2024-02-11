#pragma once
#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& cpy);
        Dog &operator=(const Dog& obj);
        virtual void makeSound() const;
};
