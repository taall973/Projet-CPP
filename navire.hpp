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
    Navire(int id, string nom, int tonnage, int maxSeconds, int maxMatelots, int capaciteMarchandise, int capacitePassagers = 0);
    Navire(int id, string nom, int tonnage, int maxSeconds, int maxMatelots, int capaciteMarchandise, Compagnie *compagnie, int capacitePassagers = 0);
    int getId();
    string getNom();
    int getTonnage();
    int getCapaciteMarchandise();
    int getCapacitePassagers();
    Compagnie *getCompagnie();
    int getMaxSeconds();
    int getMaxMatelots();
    void setId(int id);
    void setNom(string nom);
    void setTonnage(int tonnage);
    void setCapaciteMarchandise(int capaciteMarchandise);
    void setMaxSeconds(int maxSeconds);
    void setMaxMatelots(int maxMatelots);
    void setCompagnie(Compagnie *compagnie);
};

class NavireFret : public Navire
{
public:
    NavireFret(int id, string nom, int tonnage, int maxSeconds, int maxMatelots, int capaciteMarchandise);
    NavireFret(int id, string nom, int tonnage, int maxSeconds, int maxMatelots, int capaciteMArchandise, Compagnie *compagnie);
};

class NavirePassager : public Navire
{
public:
    NavirePassager(int id, string nom, int tonnage, int maxSeconds, int maxMatelots, int capaciteMarchandise, int capacitePassagers);
    NavirePassager(int id, string nom, int tonnage, int maxSeconds, int maxMatelots, int capaciteMarchandise, Compagnie *compagnie, int capacitePassagers);
};

#endif