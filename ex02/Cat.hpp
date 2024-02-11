#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& cpy);
        Cat &operator=(const Cat& obj);
        virtual void makeSound() const;
        Brain *getBrain() const;
};
