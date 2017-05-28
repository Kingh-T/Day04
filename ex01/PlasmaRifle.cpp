#include"PlasmaRifle.hpp"

 PlasmaRifle(std::string & name) : AWeapon(name, 5, 21), _name("Plasma Rifle"){

 }

 PlasmaRifle(PlasmaRifle const & rhs) : AWeapon(rhs), _name(rhs._name) {

 }

 PlasmaRifle & operator=(PlasmaRifle const &rhs) {
     if (this != &rhs) {
        AWeapon::operator=(rhs);
        this->_name = rhs._name;
     }
     return *this;
 }

 void attack() const {
     std::cout << "* piouuu piouuu piouuu *" << std::endl;
 }

 std::ostream & operator<<(std::ostream & output, PlasmaRifle &object) {
    output << "It's a " << object.getName() << std::endl;

    return output;
}