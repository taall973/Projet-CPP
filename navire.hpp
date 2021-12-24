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
    vector<Trajet *>trajets;
    Capitaine *capitaine;
    vector<Second *> seconds;
    vector<Matelot *> matelots;
    Compagnie *compagnie;

public:
    Navire(int, string);
    Navire(int, string, Compagnie*);
    ~Navire();
    int getId();
    string getNom();
    int getTonnage();
    int getCapaciteMarchandise();
    Compagnie *getCompagnie();
    int getMaxSeconds();
    int getMaxMatelots();
    Capitaine *getCapitaine();
    vector<Second *> getSeconds();
    vector<Matelot *> getMatelots();
    void setId(int);
    void setNom(string);
    void setTonnage(int);
    void setCapaciteMarchandise(int);
    void setMaxSeconds(int);
    void setMaxMatelots(int);
    void setCapitaine(Capitaine *);
    void setCompagnie(Compagnie *);
    void ajouterSecond(Second *);
    void ajouterMatelot(Matelot *);
    void ajoutPersonnel(Capitaine *, vector<Second *>, vector<Matelot *>);
    void ajoutTrajet();
};

class NavireFret : public Navire
{
public:
    NavireFret();
};

class NavirePassager : public Navire
{

public:
    NavirePassager();
};

#endif