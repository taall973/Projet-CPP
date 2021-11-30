#include "billet.hpp"
#include "passager.hpp"
#include "trajet.hpp"
#include "compagnie.hpp"

using namespace std;

Billet::Billet(int i, Passager *p, Trajet *trajet)
{
    id = i;
    passager = p;
    trajets.push_back(trajet);
    compagnie->AjoutBillets(this);
    trajet->ajoutPassager(passager);
    prixInitial = trajet->getPrixInitial();
    trajet->ajouterBillet(this);
}

int Billet::getId()
{
    return id;
}
void Billet::setId(int i)
{
    id = i;
}
int Billet::getPrixInitial()
{
    return prixInitial;
}
void Billet::setPrixInitial(int p)
{
    prixInitial = p;
}
void Billet::Affiche()
{
    cout << "Voyageur:" << passager->getNom() << passager->getPrenom(); //<< t->Affiche() << endl
}
Passager Billet::getPassager()
{
    return *passager;
}
vector<Trajet *> Billet::getTrajets()
{
    return trajets;
}

void Billet::ajoutTrajet(Trajet *trajet)
{
    trajets.push_back(trajet);
}