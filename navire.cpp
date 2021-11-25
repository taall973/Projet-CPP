#include "navire.hpp"
#include "compagnie.hpp"
#include "personnel.hpp"

using namespace std;

Navire::Navire(int i, string n)
{
    Id = i;
    Nom = n;
    compagnie->AjoutNavire(this);
}
int Navire::getId()
{
    return Id;
}
string Navire::getNom()
{
    return Nom;
}
int Navire::getTonnage()
{
    return Tonnage;
}
int Navire::getCapaciteMarchandise()
{
    return CapaciteMarchandise;
}
int Navire::getMaxSeconds()
{
    return MaxSeconds;
}
int Navire::getMaxMatelots()
{
    return MaxMatelots;
}
Capitaine Navire::getCapitaine()
{
    return *c;
}
void Navire::setId(int i)
{
    Id = i;
}
void Navire::setNom(string n)
{
    Nom = n;
}
void Navire::setTonnage(int t)
{
    Tonnage = t;
}
void Navire::setCapaciteMarchandise(int c)
{
    CapaciteMarchandise = c;
}
void Navire::setMaxSeconds(int ms)
{
    MaxSeconds = ms;
}
void Navire::setMaxMatelots(int mm)
{
    MaxMatelots = mm;
}
void Navire::setCapitaine(Capitaine *cap)
{
    c = cap;
}
void Navire::ajoutCompagnie(Compagnie *c)
{
    compagnie = c;
}

void Navire::ajoutPersonnel(Capitaine *cap, vector<Second *> s, vector<Matelot *> m)
{
    c = cap;
    for (size_t i = 0; i < MaxSeconds; i++)
    {
        if (i < s.size())
        {
            Seconds.push_back(s[i]);
        }
    }
    for (size_t i = 0; i < MaxMatelots; i++)
    {
        if (i < m.size())
        {
            Matelots.push_back(m[i]);
        }
    }
}