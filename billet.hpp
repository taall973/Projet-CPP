#ifndef BILLET_HPP
#define BILLET_HPP

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Passager;
class Trajet;
class Billet{
    int Id;
    int PrixInitial;
    Passager *p;
    Trajet *t;
    public:
        Billet(int, Passager*, Trajet*);
        ~Billet();
        int getId();
        void setId(int);
        int getPrixInitial();
        void setPrixInitial(int);
        void Affiche();
        Passager getPassager();
        Trajet getTrajet();

};

#endif