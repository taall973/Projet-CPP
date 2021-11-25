#ifndef ESCALES_HPP
#define ESCALES_HPP

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Trajet;
class Escales{
    int Id;
    int prix;
    string Nom;
    static vector <Escales*>ToutEscales;
    public:
        Escales(int, string, int);
        int getId();
        string getNom();
        void setId(int);
        void setNom(string);
        void Affiche();
        int getPrix();
};

#endif
