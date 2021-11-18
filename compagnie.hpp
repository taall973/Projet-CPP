#ifndef COMPAGNIE_HPP
#define COMPAGNIE_HPP

#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

class Personnel;
class Navire;
class Billet;
class Trajet;
class Compagnie{
    int Id;
    string Nom;
    static vector<Personnel*>ToutPersonnels;
    static vector<Navire*>ToutNavires;
    static vector<Billet*>ToutBillets;
    static vector<Trajet*>ToutTrajets;
    public:
        Compagnie(int, string);
        string getId();
        string getNom();
        void AjoutPersonnel();
        void AjoutNavire();

};

#endif