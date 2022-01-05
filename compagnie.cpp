/*Turikumwe Fabrice E.
Allan Tarcy*/
#include "compagnie.hpp"

using namespace std;

list<Personnel *>::iterator itp;
list<Navire *>::iterator itn;
list<Billet *>::iterator itb;
list<Trajet *>::iterator itt;
list<Escales *>::iterator ite;

Compagnie::Compagnie(int i, string n)
{
    id = i;
    nom = n;
}
Compagnie::~Compagnie()
{
    /*toutPersonnels.clear();
    toutNavires.clear();
    toutBillets.clear();
    toutTrajets.clear();
    toutEscales.clear();*/
    for (itp = toutPersonnels.begin(); itp != toutPersonnels.end(); itp++)
    {
        delete (*itp);
    }
    for (itn = toutNavires.begin(); itn != toutNavires.end(); itn++)
    {
        delete (*itn);
    }
    for (itb = toutBillets.begin(); itb != toutBillets.end(); itb++)
    {
        delete (*itb);
    }
    for (itt = toutTrajets.begin(); itt != toutTrajets.end(); itt++)
    {
        delete (*itt);
    }
    for (ite = toutEscales.begin(); ite != toutEscales.end(); ite++)
    {
        delete (*ite);
    }
}
int Compagnie::getId()
{
    return id;
}
string Compagnie::getNom()
{
    return nom;
}

list<Personnel *> Compagnie::getToutPersonnels()
{
    return toutPersonnels;
}
list<Passager *> Compagnie::getPassagers()
{
    return passagers;
}
list<Navire *> Compagnie::getToutNavires()
{
    return toutNavires;
}
list<Billet *> Compagnie::getToutBillets()
{
    return toutBillets;
}
list<Trajet *> Compagnie::getToutTrajets()
{
    return toutTrajets;
}
list<Escales *> Compagnie::getToutEscales()
{
    return toutEscales;
}

void Compagnie::AjoutPersonnel(Personnel *p)
{
    toutPersonnels.push_back(p);
}
void Compagnie::AjoutNavire(Navire *n)
{
    toutNavires.push_back(n);
    n->setCompagnie(this);
}
void Compagnie::AjoutBillets(Billet *b)
{
    toutBillets.push_back(b);
    b->setCompagnie(this);
}
void Compagnie::AjoutTrajet(Trajet *t)
{
    toutTrajets.push_back(t);
}
void Compagnie::AjoutEscales(Escales *e)
{
    toutEscales.push_back(e);
}

void Compagnie::triPersonnels() {
    toutPersonnels.sort(comparateurPersonnels);
}
void Compagnie::triPassagers() {
    passagers.sort(comparateurPassagers);
}
void Compagnie::triNavires() {
    toutNavires.sort(comparateurNavires);
}
void Compagnie::triBillets() {
    toutBillets.sort(comparateurBillets);
}
void Compagnie::triTrajets() {
    toutTrajets.sort(comparateurTrajets);
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

void Compagnie::trajetsBillets(int id)
{
    itb = find_if(toutBillets.begin(), toutBillets.end(), [&id](Billet *billet)
                  { return billet->getId() == id; });
    if (itb != toutBillets.end())
    {
        list<Trajet *> trajets;
        copy((*itb)->getTrajets().begin(), (*itb)->getTrajets().end(), trajets.begin());
        //list<Trajet *> trajets = (*itb)->getTrajets();
        for (itt = trajets.begin(); itt != trajets.end(); itt++)
        {
            (*itt)->Affiche();
        }
    }
}

void Compagnie::trajetsPersonnel(Personnel *p, int mois)
{
    itp = find(toutPersonnels.begin(), toutPersonnels.end(), p);
    if (itp != toutPersonnels.end())
    {
        list<Trajet *> trajets;
        copy((*itp)->getTrajets(mois).begin(), (*itp)->getTrajets(mois).end(), trajets.begin());
        //list<Trajet *> trajets = (*itp)->getTrajets(mois);
        for (itt = trajets.begin(); itt != trajets.end(); itt++)
        {
            (*itt)->Affiche();
        }
    }
}
bool Compagnie::comparateurPassagers(const Passager *pass1, const Passager *pass2)
{
    if (pass2->getNom() == pass1->getNom())
    {
        return pass2->getPrenom() > pass1->getPrenom();
    }
    else
    {
        return pass2->getNom() > pass1->getNom();
    }
}
bool Compagnie::comparateurPersonnels(const Personnel *pers1, const Personnel *pers2)
{
    if (pers2->getNom() == pers1->getNom())
    {
        return pers2->getPrenom() > pers1->getPrenom();
    }
    else
    {
        return pers2->getNom() > pers1->getNom();
    }
}
bool Compagnie::comparateurTrajets(const Trajet *traj1, const Trajet *traj2)
{
    return traj2->getDateD() > traj1->getDateD();
}
bool Compagnie::comparateurBillets(const Billet *bill1, const Billet *bill2)
{
    return bill2->getId() > bill1->getId();
}
bool Compagnie::comparateurNavires(const Navire *nav1, const Navire *nav2)
{
    return nav2->getNom() > nav1->getNom();
}