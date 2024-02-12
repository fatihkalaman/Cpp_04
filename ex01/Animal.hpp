#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

# define BR_RED "\033[1;31m"
# define BR_GREEN "\033[1;32m"
# define BR_YELLOW "\033[1;33m"
# define BR_BLUE "\033[1;34m"
# define BR_MAGENTA "\033[1;35m"
# define BR_CYAN "\033[1;36m"
# define BR_WHITE "\033[1;37m"

# define S_RED "\033[2;31m"
# define S_GREEN "\033[2;32m"
# define S_YELLOW "\033[2;33m"
# define S_BLUE "\033[2;34m"
# define S_MAGENTA "\033[2;35m"
# define S_CYAN "\033[2;36m"
# define S_WHITE "\033[2;37m"

# define BG_RED "\033[0;41m"
# define BG_GREEN "\033[0;42m"
# define BG_YELLOW "\033[0;43m"
# define BG_BLUE "\033[0;44m"
# define BG_MAGENTA "\033[0;45m"
# define BG_CYAN "\033[0;46m"
# define BG_WHITE "\033[0;47m"

# define DEF "\033[0m"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string type);
        Animal(const Animal& cpy);
        Animal &operator=(const Animal& obj);
        std::string getType() const;
        virtual void makeSound() const;
};

#endif