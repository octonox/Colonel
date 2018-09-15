#ifndef FRAPPE_HPP
#define FRAPPE_HPP
#include "coord.hpp"
/*Je dois créer une classe coordonnées qui fixe une position en latitude et longitude
il faut faire une fonction qui transforme une latitude longitude en coordonnées sur l'écran (pour savoir quelles troupes sont impactées)*/

class Frappe
{
public:
    explicit Frappe(); //Ctor

private:
    int latence_ms; //Have to wait x milliseconds to work

};

#endif // FRAPPE_HPP
