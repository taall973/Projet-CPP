#include "passager.hpp"

using namespace std;

Passager::Passager(int i, string n, string p, string c)
{
    id = i;
    nom = n;
    prenom = p;
    categorie = c;
    if (categorie == "Insulaire")
    {
        reduction = 0.75;
    }
    else if (categorie == "Insulaire secondaire")
    {
        reduction = 0.50;
    }
    else if (categorie == "Normal")
    {
        reduction = 0;
    }
    else
    {
        categorie = "Normal";
        reduction = 0;
    }
}
Passager::Passager(int i, string n, string p, string c, Billet *b)
{
    id = i;
    nom = n;
    prenom = p;
    categorie = c;
    billetPassager.push_back(b);
    if (categorie == "Insulaire")
    {
        reduction = 0.75;
    }
    else if (categorie == "Insulaire secondaire")
    {
        reduction = 0.50;
    }
    else if (categorie == "Normal")
    {
        reduction = 0;
    }
    else
    {
        categorie = "Normal";
        reduction = 0;
    }
}
Passager::~Passager() {}
int Passager::getId()
{
    return id;
}
string Passager::getNom() const
{
    return nom;
}
string Passager::getPrenom() const
{
    return prenom;
}
string Passager::getCategorie() const
{
    return categorie;
}
void Passager::getBillets()
{
    vector<Billet *>::iterator it;
    for (it = billetPassager.begin(); it != billetPassager.end(); it++)
    {
        (*it)->Affiche();
    }
}
void Passager::setNom(string n)
{
    nom = n;
}
void Passager::setPrenom(string p)
{
    prenom = p;
}
void Passager::setCategorie(string c)
{
    categorie = c;
}
void Passager::ajoutBillet(Billet *b)
{
    billetPassager.push_back(b);
}