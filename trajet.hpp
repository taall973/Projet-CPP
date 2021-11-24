#ifndef TRAJET_HPP
#define TRAJET_HPP

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Passager;
class Escales;
class Billet;
class Compagnie;
class Trajet{
    vector<Escales*>escales;
    string portDepart, portArrive;
    vector<Passager*>LesPassagers;
    Compagnie *c;
    //Date et Temps
    public:
        Trajet(string, string);
        void ajoutEscales(Escales *);
        void ajoutPassager(Passager *);
        string getPortDepart();
        string getPortArrive();
        void setPortDepart(string);
        void setPortArrive(string);
        void afficheEscales();
        void affichePassagers();
        void Affiche();
};

#endif