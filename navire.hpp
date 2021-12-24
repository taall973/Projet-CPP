#ifndef NAVIRE_HPP
#define NAVIRE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "compagnie.hpp"
#include "personnel.hpp"

using namespace std;

class Trajet;
class Personnel;
class Capitaine;
class Second;
class Matelot;
class Compagnie;
class Navire
{
    int id;
    string nom;
    int tonnage, capaciteMarchandise, maxSeconds, maxMatelots;
    vector<Trajet *> trajets;
    Compagnie *compagnie;

public:
    Navire(int id, string nom);
    Navire(int id, string nom, Compagnie *compagnie);
    int getId();
    string getNom();
    int getTonnage();
    int getCapaciteMarchandise();
    Compagnie *getCompagnie();
    int getMaxSeconds();
    int getMaxMatelots();
    void setId(int);
    void setNom(string);
    void setTonnage(int);
    void setCapaciteMarchandise(int);
    void setMaxSeconds(int);
    void setMaxMatelots(int);
    void setCompagnie(Compagnie *);
};

class NavireFret : public Navire
{
public:
    NavireFret(int id, string nom);
    NavireFret(int id, string nom, Compagnie *compagnie);
};

class NavirePassager : public Navire
{
    int capacitePassagers;
public:
    NavirePassager(int id, string nom, int capacitePassagers);
    NavirePassager(int id, string nom, Compagnie *compagnie, int capacitePassagers);
};

#endif