#include "AWeapon.hpp"

 AWeapon::AWeapon(std::string const & name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage){

 }

 AWeapon::AWeapon(AWeapon const & rhs): _name(rhs._name), _apcost(rhs._apcost), _damage(rhs._damage){

 }

 AWeapon & AWeapon::operator=(AWeapon const &rhs){
     if (this != &rhs) {
         this->_name = rhs._name;
         this->_apcost = rhs._apcost;
         this->_damage = rhs._damage;
     }
     return *this;
 }

 AWeapon::~AWeapon(){

 }

 std::string AWeapon::getName() const{
     return this->_name;
 }

 int AWeapon::getAPCost() const{
    return this->_apcost;
 }

 int AWeapon::getDamage() const{
     return this->_damage;
 }

 void AWeapon::attack() const {
     if (this->_apcost) {

     }
     else
        std::cout << "out of AP" << this->_apcost;
 }