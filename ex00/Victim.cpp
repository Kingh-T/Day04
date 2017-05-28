#include "Victim.hpp"

Victim::Victim(std::string name): _name(name) {
    std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & rhs):  _name(rhs._name) {
    std::cout << this->_name <<  ", just gave birth to his likeness !" << std::endl;
}

Victim & Victim::operator=(Victim const & rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
    }
    std::cout << this->_name << ", just produced more peasants !" << std::endl;
    return *this;
}

Victim::~Victim() {
    std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

std::string Victim::getName() const {
    return this->_name;
}

std::ostream & operator<<(std::ostream & output, Victim &object) {
    output << "I am " << object.getName() << ", and I like otters" << std::endl;

    return output;
}

void Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}