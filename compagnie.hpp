/*Turikumwe Fabrice E.
Allan Tarcy*/
#ifndef COMPAGNIE_HPP
#define COMPAGNIE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
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

public:
    list<Personnel *> toutPersonnels;
    list<Passager *> passagers;
    list<Navire *> toutNavires;
    list<Billet *> toutBillets;
    list<Trajet *> toutTrajets;
    list<Escales *> toutEscales;
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
    static bool comparateurPassagers(const Passager *pass1, const Passager *pass2);
    static bool comparateurPersonnels(const Personnel *pers1, const Personnel *pers2);
    static bool comparateurTrajets(const Trajet *traj1, const Trajet *traj2);
    static bool comparateurBillets(const Billet *bill1, const Billet *bill2);
    static bool comparateurNavires(const Navire *nav1, const Navire *nav2);
    
};

#endif