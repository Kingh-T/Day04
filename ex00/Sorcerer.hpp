#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Peon.hpp"
#include "Victim.hpp"

class Sorcerer {
    std::string _name;
    std::string _title;
    Sorcerer(){};
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & rhs);
        Sorcerer & operator=(Sorcerer const &);
        ~Sorcerer();

        std::string getName() const;
        std::string getTitle() const;
        void polymorph(Victim const &) const;
        void polymorph(Peon const &) const;

};

std::ostream & operator<<(std::ostream & output, Sorcerer & object);

#endif