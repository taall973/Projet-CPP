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
protected:
    int id;
    string nom;
    int tonnage, capaciteMarchandise, maxSeconds, maxMatelots, capacitePassagers;
    vector<Trajet *> trajets;
    Compagnie *compagnie;

public:
    Navire(int id, string nom, int tonnage, int capaciteMarchandise, int capacitePassagers = 0);
    Navire(int id, string nom, int tonnage, int capaciteMarchandise, Compagnie *compagnie, int capacitePassagers = 0);
    int getId();
    string getNom();
    int getTonnage();
    int getCapaciteMarchandise();
    int getCapacitePassagers();
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
    NavireFret(int id, string nom, int tonnage, int capaciteMarchandise);
    NavireFret(int id, string nom, int tonnage, int capaciteMArchandise, Compagnie *compagnie);
};

class NavirePassager : public Navire
{
public:
    NavirePassager(int id, string nom, int tonnage, int capaciteMarchandise, int capacitePassagers);
    NavirePassager(int id, string nom, int tonnage, int capaciteMarchandise, Compagnie *compagnie, int capacitePassagers);
};

#endif