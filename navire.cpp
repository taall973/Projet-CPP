#include "navire.hpp"
#include "compagnie.hpp"
#include "personnel.hpp"

using namespace std;

Navire::Navire(){}
Navire::Navire(int i, string n)
{
    id = i;
    nom = n;
    compagnie->AjoutNavire(this);
}
Navire::~Navire(){}
int Navire::getId()
{
    return id;
}
string Navire::getNom()
{
    return nom;
}
int Navire::getTonnage()
{
    return tonnage;
}
int Navire::getCapaciteMarchandise()
{
    return capaciteMarchandise;
}
int Navire::getMaxSeconds()
{
    return maxSeconds;
}
int Navire::getMaxMatelots()
{
    return maxMatelots;
}
Capitaine *Navire::getCapitaine()
{
    return capitaine;
}

vector<Second *> Navire::getSeconds()
{
    return seconds;
}

vector<Matelot *> Navire::getMatelots()
{
    return matelots;
}

void Navire::setId(int i)
{
    id = i;
}
void Navire::setNom(string n)
{
    nom = n;
}
void Navire::setTonnage(int t)
{
    tonnage = t;
}
void Navire::setCapaciteMarchandise(int c)
{
    capaciteMarchandise = c;
}
void Navire::setMaxSeconds(int ms)
{
    maxSeconds = ms;
}
void Navire::setMaxMatelots(int mm)
{
    maxMatelots = mm;
}
void Navire::setCapitaine(Capitaine *cap)
{
    capitaine = cap;
}
void Navire::setCompagnie(Compagnie *c)
{
    compagnie = c;
}
void Navire::ajoutPersonnel(Capitaine *cap, vector<Second *> s, vector<Matelot *> m)
{
    capitaine = cap;
    for (size_t i = 0; i < maxSeconds; i++)
    {
        if (i < s.size())
        {
            seconds.push_back(s[i]);
        }
    }
    for (size_t i = 0; i < maxMatelots; i++)
    {
        if (i < m.size())
        {
            matelots.push_back(m[i]);
        }
    }
}
