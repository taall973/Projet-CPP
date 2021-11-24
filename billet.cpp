#include "billet.hpp"
#include "passager.hpp"
#include "trajet.hpp"
#include "compagnie.hpp"

using namespace std;

Billet::Billet(int i, Passager *a, Trajet *n)
{
    Id = i;
    p = a;
    t = n;
    c->AjoutBillets(this);
    n->ajoutPassager(a);
}

Billet::~Billet() {}
int Billet::getId()
{
    return Id;
}
void Billet::setId(int i)
{
    Id = i;
}
int Billet::getPrixInitial()
{
    return PrixInitial;
}
void Billet::setPrixInitial(int p)
{
    PrixInitial = p;
}
void Billet::Affiche()
{
    cout << "Voyageur:" << p->getNom() << p->getPrenom(); //<< t->Affiche() << endl
}
Passager Billet::getPassager()
{
    return *p;
}
Trajet Billet::getTrajet()
{
    return *t;
}