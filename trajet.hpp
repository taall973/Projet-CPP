#ifndef TRAJET_HPP
#define TRAJET_HPP

#include <iostream>
#include <string>
#include <vector>
#include "date.hpp"
#include "trajet.hpp"
#include "billet.hpp"
#include "escales.hpp"
#include "passager.hpp"
#include "compagnie.hpp"
#include "navire.hpp"

using namespace std;

class Passager;
class Escales;
class Billet;
class Compagnie;
class Capitaine;
class Navire;
class Second;
class Matelot;
class Date;

class Trajet
{

    vector<Escales *> escales;
    Escales *portDepart, *portArrive;
    vector<Passager *> passagers;
    vector<Billet *> billets;
    Compagnie *compagnie;
    Navire *navire;
    Date *dateD, *dateA; //Format JJ/MM/AA HH:MM:SS
    int prix;
    Capitaine *capitaine;
    vector<Second *> seconds;
    vector<Matelot *> matelots;

public:
    Trajet(Escales *portDepart, Escales *portArrivee, Navire *navire, Date *dateDepart, Date *dateArrivee);
    ~Trajet();
    void ajoutEscales(Escales *escales);
    void ajoutPassager(Passager *passager, Billet *billet);
    Escales *getPortDepart();
    Escales *getPortArrive();
    Compagnie *getCompagnie();
    void setPortDepart(Escales *portDepart);
    void setPortArrive(Escales *portArrivee);
    Date *getDateD();
    Date *getDateA();
    void setDateD(Date *dateDepart);
    void setDateA(Date *dateArrivee);
    void afficheEscales();
    void affichePassagers();
    void Affiche();
    int getPrixInitial();
    vector<Billet *> getBillets();
    Capitaine *getCapitaine();
    vector<Second *> getSeconds();
    vector<Matelot *> getMatelots();
    void setCapitaine(Capitaine *capitaine);
    void ajouterSecond(Second *second);
    void ajouterMatelot(Matelot *matelot);
    void ajoutPersonnel(Capitaine *capitaine, vector<Second *> seconds, vector<Matelot *> matelots);
};

class TriTrajets
{
public:
    bool operator()(const Trajet *t1,const Trajet *t2)
    {
        return t1 < t2;
    }
};

#endif