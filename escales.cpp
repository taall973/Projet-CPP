#include "escales.hpp"

using namespace std;

vector<Escales *> Escales::toutEscales;
vector<Escales *>::iterator it;

Escales::Escales(int i, string n, int p)
{
    id = i;
    nom = n;
    prix = p;
    toutEscales.push_back(this);
}
Escales::~Escales(){}
int Escales::getId()
{
    return id;
}
string Escales::getNom()
{
    return nom;
}
void Escales::setId(int i)
{
    id = i;
}
void Escales::setNom(string n)
{
    nom = n;
}
void Escales::Affiche()
{
    for (it = toutEscales.begin(); it != toutEscales.end(); it++)
    {
        cout << (*it)->getNom();
    }
}

int Escales::getPrix()
{
    return prix;
}