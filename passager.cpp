/*Turikumwe Fabrice E.
Allan Tarcy*/
#include "passager.hpp"

using namespace std;

Passager::Passager(int i, string n, string p) : id(i), nom(n), prenom(p), reduction(1), categorie("normal")
{
}

Passager::Passager(int i, string n, string p, Billet *b) : id(i), nom(n), prenom(p), reduction(1), categorie("normal")
{
    billetPassager.push_back(b);
}

Insulaire::Insulaire(int i, string n, string p) : Passager(i, n, p)
{
    categorie = "insulaire";
    reduction = 0.5;
}

Insulaire::Insulaire(int i, string n, string p, Billet *b) : Passager(i, n, p, b)
{
    categorie = "insulaire";
    reduction = 0.5;
    billetPassager.push_back(b);
}

InsulaireSecondaire::InsulaireSecondaire(int i, string n, string p) : Passager(i, n, p)
{
    categorie = "insulaire secondaire";
    reduction = 0.25;
}

InsulaireSecondaire::InsulaireSecondaire(int i, string n, string p, Billet *b) : Passager(i, n, p, b)
{
    categorie = "insulaire secondaire";
    reduction = 0.25;
    billetPassager.push_back(b);
}
Passager::~Passager(){
    billetPassager.clear();
}
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

void Passager::ajoutBillet(Billet *b)
{
    billetPassager.push_back(b);
}

double Passager::getReduction()
{
    return reduction;
}

string Passager::getCategorie() const
{
    return categorie;
}