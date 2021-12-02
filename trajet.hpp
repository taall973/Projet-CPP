#ifndef TRAJET_HPP
#define TRAJET_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Passager;
class Escales;
class Billet;
class Compagnie;
class Capitaine;
class Navire;
class Second;
class Matelot;
class Trajet
{
    vector<Escales *> escales;
    string portDepart, portArrive;
    vector<Passager *> passagers;
    vector<Billet *> billets;
    Compagnie *compagnie;
    Navire *navire;
    string date;  //Format JJ/MM/AA
    string heure; //Format HH/MM
    int prixInitial;

public:
    Trajet(string, string, int, Navire *);
    ~Trajet();
    void ajoutEscales(Escales *);
    void ajoutPassager(Passager *);
    string getPortDepart();
    string getPortArrive();
    void setPortDepart(string);
    void setPortArrive(string);
    string getDate();
    void setDate(string);
    string getHeure();
    void setHeure(string);
    void afficheEscales();
    void affichePassagers();
    void Affiche();
    int getPrixInitial();
    vector<Billet *> getBillets();
    void ajouterBillet(Billet *);
    Capitaine *getCapitaine();
    vector<Second *> getSeconds();
    vector<Matelot *> getMatelots();
};

#endif