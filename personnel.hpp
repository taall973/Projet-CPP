/*Turikumwe Fabrice E.
Allan Tarcy*/
#ifndef PERSONNEL_HPP
#define PERSONNEL_HPP

#include <iostream>
#include <string>
#include <vector>

#include "compagnie.hpp"

using namespace std;

class Compagnie;
class Trajet;
class Personnel
{
    int id;
    string nom, prenom;
    Compagnie *compagnie;
    vector<Trajet *> trajets;

public:
    Personnel(int id, string nom, string prenom, Compagnie *compagnie);
    ~Personnel();
    int getId();
    string getNom()const;
    string getPrenom()const;
    string getCompagnie();
    void setId(int);
    void setNom(string);
    void setPrenom(string);
    void setCompagnie(Compagnie *);
    vector<Trajet *> getTrajets(int mois);
};

class Capitaine : public Personnel
{
    int tonnageMax;

public:
    Capitaine(int id, string nom, string prenom, Compagnie *compagnie, int tonnageMax);
    int getTonnage();
};

class Second : public Personnel
{
    int tonnageMax;

public:
    Second(int id, string nom, string prenom, Compagnie *compagnie, int tonnageMax);
    int getTonnage();
};

class Matelot : public Personnel
{

public:
    Matelot(int id, string nom, string prenom, Compagnie *compagnie);
};

#endif