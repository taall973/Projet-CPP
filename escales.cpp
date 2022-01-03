/*Turikumwe Fabrice E.
Allan Tarcy*/
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
Escales::~Escales()
{
    for (size_t i = 0; i < toutEscales.size(); i++)
    {
        delete toutEscales[i];
    }
}
int Escales::getId()
{
    return id;
}
string Escales::getNom()
{
    return nom;
}
void Escales::setPrix(int p)
{
    id = p;
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