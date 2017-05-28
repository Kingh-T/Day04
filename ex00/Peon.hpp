#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include <string>

class Peon {
    std::string _name;
    Peon(){};
    public:
        Peon(std::string name);
        Peon(Peon const & rhs);
        Peon & operator=(Peon const &);
        ~Peon();

        std::string getName() const;
        void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & output, Peon & object);

#endif