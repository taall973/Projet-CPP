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
class Escales;
class Compagnie{
    int id;
    string nom;
    static vector<Personnel*>toutPersonnels;
    static vector<Navire*>toutNavires;
    static vector<Billet*>toutBillets;
    static vector<Trajet*>toutTrajets;
    static vector<Escales*>toutEscales;
    public:
        Compagnie(int, string);
        int getId();
        string getNom();
        void AjoutPersonnel(Personnel *);
        void AjoutNavire(Navire *);
        void AjoutBillets(Billet *);
        void AjoutTrajet(Trajet *);
        void AjoutEscales(Escales *);
        void AffichePersonnels();
        void AfficheNavires();
        void AfficheBillets();
        void AfficheTrajets();
        void AfficheEscales();
};

#endif