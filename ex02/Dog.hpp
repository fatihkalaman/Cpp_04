#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& cpy);
        Dog &operator=(const Dog& obj);
        virtual void makeSound() const;
        std::string *getBrain() const;
};
