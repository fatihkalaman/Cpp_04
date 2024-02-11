#pragma once

#include <iostream>

class Brain
{
    private:

    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(const Brain& cpy);
        Brain &operator=(const Brain& obj);
};
