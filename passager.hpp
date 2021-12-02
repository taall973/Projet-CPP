#ifndef PASSAGER_HPP
#define PASSAGER_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Billet;
class Passager
{
    int id;
    string nom, prenom, categorie;
    float reduction; //Vaut mieux mettre Reduction dans cette classe pour mieux l'appliquer sur le Billet
    vector<Billet *> billetPassager;

public:
    //2 constructeurs
    Passager(int, string, string, string);
    Passager(int, string, string, string, Billet *);
    ~Passager();
    int getId();
    string getNom() const;
    string getPrenom() const;
    string getCategorie() const;
    void getBillets();
    void setNom(string);
    void setPrenom(string);
    void setCategorie(string);
    void ajoutBillet(Billet *);
};

#endif