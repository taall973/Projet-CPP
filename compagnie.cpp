#include "compagnie.hpp"
#include "personnel.hpp"
#include "navire.hpp"
#include "billet.hpp"
#include "trajet.hpp"
#include "escales.hpp"

vector<Personnel *> Compagnie::toutPersonnels;
vector<Navire *> Compagnie::toutNavires;
vector<Billet *> Compagnie::toutBillets;
vector<Trajet *> Compagnie::toutTrajets;
vector<Escales *> Compagnie::toutEscales;

vector<Personnel *>::iterator itp;
vector<Navire *>::iterator itn;
vector<Billet *>::iterator itb;
vector<Trajet *>::iterator itt;
vector<Escales *>::iterator ite;

Compagnie::Compagnie(int i, string n)
{
    id = i;
    nom = i;
}
int Compagnie::getId()
{
    return id;
}
string Compagnie::getNom()
{
    return nom;
}
void Compagnie::AjoutPersonnel(Personnel *p)
{
    toutPersonnels.push_back(p);
}
void Compagnie::AjoutNavire(Navire *n)
{
    toutNavires.push_back(n);
    n->ajoutCompagnie(this);
}
void Compagnie::AjoutBillets(Billet *b)
{
    toutBillets.push_back(b);
}
void Compagnie::AjoutTrajet(Trajet *t)
{
    toutTrajets.push_back(t);
}
void Compagnie::AjoutEscales(Escales *e)
{
    toutEscales.push_back(e);
}
void Compagnie::AffichePersonnels()
{
    for (itp = toutPersonnels.begin(); itp != toutPersonnels.end(); itp++)
    {
        cout << (*itp)->getNom() << (*itp)->getPrenom() << endl;
    }
}
void Compagnie::AfficheNavires()
{
    for (itn = toutNavires.begin(); itn != toutNavires.end(); itn++)
    {
        cout << (*itn)->getNom() << endl;
    }
}
void Compagnie::AfficheBillets()
{
    for (itb = toutBillets.begin(); itb != toutBillets.end(); itb++)
    {
        //cout << (*itb)->getPassager()->getNom() << (*itb)->getTrajet() << endl;
        (*itb)->Affiche();
    }
}
void Compagnie::AfficheTrajets()
{
    for (itt = toutTrajets.begin(); itt != toutTrajets.end(); itt++)
    {
        (*itt)->Affiche();
    }
}

void Compagnie::AfficheEscales()
{
    for (ite = toutEscales.begin(); ite != toutEscales.end(); ite++)
    {
        cout << (*ite)->getNom() << endl;
    }
}