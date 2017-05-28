#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon {
    std::string _name;
    int _apcost;
    int _damage;
    public:
        AWeapon(){};
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const & rhs);
        AWeapon & operator=(AWeapon const &);
        ~AWeapon();

        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};

#endif