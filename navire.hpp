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
    list<Second *> Seconds;
    list<Matelot *> Matelots;
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
    void setId(int);
    void setNom(string);
    void setTonnage(int);
    void setCapaciteMarchandise(int);
    void setMaxSeconds(int);
    void setMaxMatelots(int);
    void setCapitaine(Capitaine *);
    void ajoutCompagnie(Compagnie *);
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