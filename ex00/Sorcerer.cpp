#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", " << "is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & rhs):  _name(rhs._name), _title(rhs._title) {
    std::cout << this->_name << ", " << this->_title << ", " << "has a twin !" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_title = rhs._title; 
    }
    std::cout << this->_name << ", " << this->_title << ", " << "has a clone !" << std::endl;
    return *this;
}

Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", " << this->_title << ", " << "is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getName() const {
    return this->_name;
}

std::string Sorcerer::getTitle() const {
    return this->_title;
}

std::ostream & operator<<(std::ostream & output, Sorcerer &object) {
    output << "I am " << object.getName() << ", " << object.getTitle() << ", and I like ponies" << std::endl;

    return output;
}

void Sorcerer::polymorph(Victim const & victim) const {
    victim.getPolymorphed();
}

void Sorcerer::polymorph(Peon const & peon) const {
    peon.getPolymorphed();
}