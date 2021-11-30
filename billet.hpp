#ifndef BILLET_HPP
#define BILLET_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Passager;
class Trajet;
class Compagnie;
class Billet
{
    int id;
    int prixInitial;
    Passager *passager;
    vector<Trajet *> trajets;
    Compagnie *compagnie;

public:
    Billet(int, Passager *, Trajet *);
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