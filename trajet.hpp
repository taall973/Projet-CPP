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
class Trajet
{
    int prixInitial;
    vector<Escales *> escales;
    string portDepart, portArrive;
    vector<Passager *> LesPassagers;
    Compagnie *c;
    string date;  //Format JJ/MM/AA
    string heure; //Format HH/MM
public:
    Trajet(string, string, int);
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
};

#endif