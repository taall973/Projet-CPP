#ifndef NAVIRE_HPP
#define NAVIRE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

class Personnel;
class Capitaine;
class Second;
class Matelot;
class Compagnie;
class Navire
{
    int Id;
    string Nom;
    int Tonnage, CapaciteMarchandise, MaxSeconds, MaxMatelots;
    Capitaine *c;
    vector<Second *> Seconds;
    vector<Matelot *> Matelots;
    Compagnie *compagnie;

public:
    Navire(int, string);
    int getId();
    string getNom();
    int getTonnage();
    int getCapaciteMarchandise();
    int getMaxSeconds();
    int getMaxMatelots();
    Capitaine getCapitaine();
    vector<Second *> getSeconds();
    vector<Matelot *> getMatelots();
    void setId(int);
    void setNom(string);
    void setTonnage(int);
    void setCapaciteMarchandise(int);
    void setMaxSeconds(int);
    void setMaxMatelots(int);
    void setCapitaine(Capitaine *);
    void ajoutCompagnie(Compagnie *);
    void ajoutPersonnel(Capitaine *, vector<Second *>, vector<Matelot *>);
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