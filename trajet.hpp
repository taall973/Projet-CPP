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
    string portDepart, portArrive;
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
    Trajet(string, string, int, Navire *, Date *, Date *);
    ~Trajet();
    void ajoutEscales(Escales *);
    void ajoutPassager(Passager *, Billet *);
    string getPortDepart();
    string getPortArrive();
    Compagnie *getCompagnie();
    void setPortDepart(string);
    void setPortArrive(string);
    Date *getDateD();
    Date *getDateA();
    void setDateD(Date *);
    void setDateA(Date *);
    void afficheEscales();
    void affichePassagers();
    void Affiche();
    int getPrixInitial();
    vector<Billet *> getBillets();
    Capitaine *getCapitaine();
    vector<Second *> getSeconds();
    vector<Matelot *> getMatelots();
    void setCapitaine(Capitaine *);
    void ajouterSecond(Second *);
    void ajouterMatelot(Matelot *);
    void ajoutPersonnel(Capitaine *, vector<Second *>, vector<Matelot *>);
};

#endif