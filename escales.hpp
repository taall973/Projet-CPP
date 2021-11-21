#ifndef ESCALES_HPP
#define ESCALES_HPP

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Trajet;
class Escales{
    int Id;
    string Nom;
    static vector <Escales*>ToutEscales;
    public:
        Escales(int, string);
        int getId();
        string getNom();
        void setId(int);
        void setNom(string);
        void Affiche();
};

#endif
