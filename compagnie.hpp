/*Turikumwe Fabrice E.
Allan Tarcy*/
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
    Compagnie(int id, string nom);
    ~Compagnie();
    int getId();
    string getNom();
    void AjoutPersonnel(Personnel *personnel);
    void AjoutNavire(Navire *navire);
    void AjoutBillets(Billet *billet);
    void AjoutTrajet(Trajet *trajet);
    void AjoutEscales(Escales *escale);
    void AffichePersonnels();
    void AfficheNavires();
    void AfficheBillets();
    void AfficheTrajets();
    void AfficheEscales();
    void trajetsBillets(int idBillet);
    void trajetsPersonnel(Personnel *personnel, int mois);
};

#endif