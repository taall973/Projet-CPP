#ifndef ESCALES_HPP
#define ESCALES_HPP

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Trajet;
class Escales{
    int id;
    int prix;
    string nom;
    static vector <Escales*>toutEscales;
    public:
        Escales(int, string, int);
        ~Escales();
        int getId();
        string getNom();
        void setId(int);
        void setNom(string);
        void Affiche();
        int getPrix();
};

#endif
