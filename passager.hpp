/*Turikumwe Fabrice E.
Allan Tarcy*/
#ifndef PASSAGER_HPP
#define PASSAGER_HPP

#include <iostream>
#include <string>
#include <vector>

#include "billet.hpp"
#include "trajet.hpp"

using namespace std;

class Billet;
class Passager
{
protected:
    int id;
    string nom, prenom, categorie;
    double reduction;
    vector<Billet *> billetPassager;

public:
    //2 constructeurs
    Passager(int id, string nom, string prenom);
    Passager(int id, string nom, string prenom, Billet *billet);
    ~Passager();
    int getId();
    string getNom() const;
    string getPrenom() const;
    string getCategorie() const;
    double getReduction();
    void getBillets();
    void setNom(string nom);
    void setPrenom(string prenom);
    void ajoutBillet(Billet *billet);
};

class Insulaire : public Passager
{
public:
    Insulaire(int id, string nom, string prenom);
    Insulaire(int id, string nom, string prenom, Billet *billet);
};

class InsulaireSecondaire : public Passager
{
public:
    InsulaireSecondaire(int id, string nom, string prenom);
    InsulaireSecondaire(int id, string nom, string prenom, Billet *billet);
};

#endif