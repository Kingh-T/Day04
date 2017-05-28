#include "Peon.hpp"

Peon::Peon(std::string name): _name(name) {
    std::cout << "Some random victim called " << this->_name << " just popped !\nZog zog." << std::endl;
}

Peon::Peon(Peon const & rhs):  _name(rhs._name) {
    std::cout << this->_name <<  ", just gave birth to his likeness !" << std::endl;
}

Peon & Peon::operator=(Peon const & rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
    }
    std::cout << this->_name << ", just produced more peon peasants !" << std::endl;
    return *this;
}

Peon::~Peon() {
    std::cout << "Bleuark...\nPeon " << this->_name << " just died for no apparent reason !" << std::endl;
}

std::string Peon::getName() const {
    return this->_name;
}

std::ostream & operator<<(std::ostream & output, Peon &object) {
    output << "I am " << object.getName() << ", and I like otters" << std::endl;

    return output;
}

void Peon::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute pink pony !" << std::endl;
}