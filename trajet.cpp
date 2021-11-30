#include "trajet.hpp"
#include "billet.hpp"
#include "escales.hpp"
#include "passager.hpp"
#include "compagnie.hpp"
#include "navire.hpp"

using namespace std;

Trajet::Trajet(string pd, string pa, int pi, Navire *nav)
{
    portDepart = pd;
    portArrive = pa;
    prixInitial = pi;
    navire = nav;
    compagnie->AjoutTrajet(this);
}
void Trajet::ajoutEscales(Escales *e)
{
    prixInitial += e->getPrix();
    escales.push_back(e);
}
void Trajet::ajoutPassager(Passager *p)
{
    passagers.push_back(p);
}
string Trajet::getPortDepart()
{
    return portDepart;
}
string Trajet::getPortArrive()
{
    return portArrive;
}
void Trajet::setPortDepart(string pd)
{
    portDepart = pd;
}
void Trajet::setPortArrive(string pa)
{
    portArrive = pa;
}

string Trajet::getDate()
{
    return date;
}

void Trajet::setDate(string d)
{
    date = d;
}

string Trajet::getHeure()
{
    return heure;
}

void Trajet::setHeure(string h)
{
    heure = h;
}

void Trajet::afficheEscales()
{
    vector<Escales *>::iterator it;
    for (it = escales.begin(); it != escales.end(); it++)
    {
        cout << (*it)->getNom() << endl;
    }
}
void Trajet::affichePassagers()
{
    vector<Passager *>::iterator it;
    for (it = passagers.begin(); it != passagers.end(); it++)
    {
        cout << (*it)->getNom() << (*it)->getPrenom() << (*it)->getCategorie() << endl;
    }
}
void Trajet::Affiche()
{
    cout << "Trajet:" << this->getPortDepart() << this->getPortArrive() << endl;
    this->afficheEscales();
    this->affichePassagers();
}

int Trajet::getPrixInitial()
{
    return prixInitial;
}

vector<Billet *> Trajet::getBillets()
{
    return billets;
}

void Trajet::ajouterBillet(Billet *b)
{
    billets.push_back(b);
}

Capitaine *Trajet::getCapitaine()
{
    return navire->getCapitaine();
}

vector<Second *> Trajet::getSeconds()
{
    return navire->getSeconds();
}

vector<Matelot *> Trajet::getMatelots()
{
    return navire->getMatelots();
}