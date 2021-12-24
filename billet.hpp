#ifndef BILLET_HPP
#define BILLET_HPP

#include <iostream>
#include <string>
#include <vector>

#include "passager.hpp"
#include "trajet.hpp"
#include "compagnie.hpp"

using namespace std;

class Passager;
class Trajet;
class Compagnie;
class Billet
{
    int id;
    int prix;
    Passager *passager;
    vector<Trajet *> trajets;
    Compagnie *compagnie;

public:
    Billet(int, Passager *, Trajet *);
    ~Billet();
    int getId();
    void setId(int);
    int getPrixInitial();
    void setPrixInitial(int);
    void Affiche();
    Passager getPassager();
    vector<Trajet *> getTrajets();
    void ajoutTrajet(Trajet *);
};

#endif