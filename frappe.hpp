#ifndef FRAPPE_HPP
#define FRAPPE_HPP
#include "coord.hpp"
/*Je dois cr�er une classe coordonn�es qui fixe une position en latitude et longitude
il faut faire une fonction qui transforme une latitude longitude en coordonn�es sur l'�cran (pour savoir quelles troupes sont impact�es)*/

class Frappe
{
public:
    explicit Frappe(); //Ctor

private:
    int latence_ms; //Have to wait x milliseconds to work

};

#endif // FRAPPE_HPP
