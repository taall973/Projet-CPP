#ifndef TRAJET_HPP
#define TRAJET_HPP

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Passager;
class Escales;
class Trajet{
    vector<Escales*>escales;
    string portDepart, portArrive;
    vector<Passager*>LesPassagers;
    //Date et Temps
    public:
        Trajet(string, string);
        string getPortDepart();
        string getPortArrive();
        void setPortDepart(string);
        void setPortArrive(string);
        void afficheEscales();
        void affichePassagers();
        void Affiche();
};

#endif