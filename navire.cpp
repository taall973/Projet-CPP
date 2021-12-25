#include "navire.hpp"

using namespace std;

Navire::Navire(int i, string n, int t, int cm, int cp = 0) : id(i), nom(n), tonnage(t), capaciteMarchandise(cm), capacitePassagers(cp)
{
}
Navire::Navire(int i, string n, int t, int cm, Compagnie *c, int cp = 0) : id(i), nom(n), compagnie(c), tonnage(t), capaciteMarchandise(cm), capacitePassagers(cp)
{
    compagnie->AjoutNavire(this);
}

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

int Navire::getCapacitePassagers()
{
    return capacitePassagers;
}

int Navire::getMaxSeconds()
{
    return maxSeconds;
}
int Navire::getMaxMatelots()
{
    return maxMatelots;
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
Compagnie *Navire::getCompagnie()
{
    return compagnie;
}
void Navire::setMaxSeconds(int ms)
{
    maxSeconds = ms;
}
void Navire::setMaxMatelots(int mm)
{
    maxMatelots = mm;
}
void Navire::setCompagnie(Compagnie *c)
{
    compagnie = c;
}

NavireFret::NavireFret(int i, string n, int t, int cm) : Navire(i, n, t, cm)
{
}

NavireFret::NavireFret(int i, string n, int t, int cm, Compagnie *c) : Navire(i, n, t, cm, c)
{
}

NavirePassager::NavirePassager(int i, string n, int t, int cm, int cp) : Navire(i, n, t, cm, cp)
{
}

NavirePassager::NavirePassager(int i, string n, int t, int cm, Compagnie *c, int cp) : Navire(i, n, t, cm, c, cp)
{
}