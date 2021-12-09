#include "compagnie.hpp"
#include "personnel.hpp"
#include "navire.hpp"
#include "billet.hpp"
#include "trajet.hpp"
#include "escales.hpp"

using namespace std;

vector<Personnel *>::iterator itp;
vector<Navire *>::iterator itn;
vector<Billet *>::iterator itb;
vector<Trajet *>::iterator itt;
vector<Escales *>::iterator ite;

Compagnie::Compagnie(int i, string n)
{
    id = i;
    nom = n;
}
Compagnie::~Compagnie(){}
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
    cout << "Personnels:" << endl;
    for (itp = toutPersonnels.begin(); itp != toutPersonnels.end(); itp++)
    {
        cout << (*itp)->getNom() << " " << (*itp)->getPrenom() << endl;
    }
}
void Compagnie::AfficheNavires()
{
    cout << "Navires:" << endl;
    for (itn = toutNavires.begin(); itn != toutNavires.end(); itn++)
    {
        cout << (*itn)->getNom() << endl;
    }
}
void Compagnie::AfficheBillets()
{
    cout << "Billets:" << endl;
    for (itb = toutBillets.begin(); itb != toutBillets.end(); itb++)
    {
        //cout << (*itb)->getPassager()->getNom() << (*itb)->getTrajet() << endl;
        (*itb)->Affiche();
    }
}
void Compagnie::AfficheTrajets()
{
    cout << "Trajets:" << endl;
    for (itt = toutTrajets.begin(); itt != toutTrajets.end(); itt++)
    {
        (*itt)->Affiche();
    }
}

void Compagnie::AfficheEscales()
{
    cout << "Escales:" << endl;
    for (ite = toutEscales.begin(); ite != toutEscales.end(); ite++)
    {
        cout << (*ite)->getNom() << endl;
    }
}