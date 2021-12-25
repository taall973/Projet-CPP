#ifndef COMPAGNIE_HPP
#define COMPAGNIE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

#include "personnel.hpp"
#include "navire.hpp"
#include "billet.hpp"
#include "trajet.hpp"
#include "escales.hpp"

using namespace std;

class Passager;
class Personnel;
class Navire;
class Billet;
class Trajet;
class Escales;
class Compagnie
{
    
    int id;
    string nom;
    vector<Passager *> passagers;
    vector<Personnel *> toutPersonnels;
    vector<Navire *> toutNavires;
    vector<Billet *> toutBillets;
    vector<Trajet *> toutTrajets;
    vector<Escales *> toutEscales;

public:
    Compagnie(int, string);
    ~Compagnie();
    int getId();
    string getNom();
    void AjoutPersonnel(Personnel *);
    void AjoutNavire(Navire *);
    void AjoutBillets(Billet *);
    void AjoutTrajet(Trajet *);
    void AjoutEscales(Escales *);
    void AffichePersonnels();
    void AfficheNavires();
    void AfficheBillets();
    void AfficheTrajets();
    void AfficheEscales();
    void trajetsBillets(int id);
};

#endif