#ifndef PLASMARIFLE_CPP
# define PLASMARIFLE_CPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
    std::string _name;
    PlasmaRifle(){};
    public:
        PlasmaRifle(std::string & name);
        PlasmaRifle(PlasmaRifle const & rhs);
        PlasmaRifle & operator=(PlasmaRifle const &);
        ~PlasmaRifle(){};

        void attack() const;
};

std::ostream & operator<<(std::ostream & output, PlasmaRifle & object);

#endif

