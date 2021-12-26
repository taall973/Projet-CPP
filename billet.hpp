#ifndef BILLET_HPP
#define BILLET_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
    Billet(int id, Passager *passager, Trajet *trajet);
    ~Billet();
    int getId();
    void setId(int id);
    int getPrixInitial();
    void setPrixInitial(int prix);
    void Affiche();
    Passager *getPassager();
    vector<Trajet *> getTrajets();
    void ajoutTrajet(Trajet *trajet);
};

#endif