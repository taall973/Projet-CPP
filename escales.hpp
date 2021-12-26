#ifndef ESCALES_HPP
#define ESCALES_HPP

#include<iostream>
#include<string>
#include<vector>

#include "trajet.hpp"

using namespace std;

class Trajet;
class Escales{
    int id;
    int prix;
    string nom;
    static vector <Escales*>toutEscales;
    public:
        Escales(int id, string nom, int prix);
        ~Escales();
        int getId();
        string getNom();
        void setNom(string nom);
        void setPrix(int prix);
        void Affiche();
        int getPrix();
};

#endif
