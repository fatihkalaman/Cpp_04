#pragma once

#include <iostream>
#include <string.h>

class	WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const	WrongAnimal& copy);
		WrongAnimal &operator =(const	WrongAnimal& copy);
		WrongAnimal(std::string type);
		void makeSound()const;
		std::string getType()const;
};
