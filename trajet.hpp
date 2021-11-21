#ifndef TRAJET_HPP
#define TRAJET_HPP

#include<iostream>
#include<string>
#include<vector>

class Passager;
class Escales;
class Trajet{
    //Je pense c'est mieux si on fait une classe des escales qui sera lie avec 
    //les trajets comme ca, on fera une trajet d'une list static de tout les escales
    //et une trajet prendra celles ou il passera slm
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
};

#endif