#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim {
    std::string _name;
    Victim(){};
    public:
        Victim(std::string name);
        Victim(Victim const & rhs);
        Victim & operator=(Victim const &);
        ~Victim();

        std::string getName() const;
        void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & output, Victim & object);

#endif