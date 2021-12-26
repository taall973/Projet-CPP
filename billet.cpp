#include "billet.hpp"

using namespace std;

Billet::Billet(int i, Passager *p, Trajet *trajet)
{
    id = i;
    passager = p;
    trajets.push_back(trajet);
    compagnie = trajet->getCompagnie();
    compagnie->AjoutBillets(this);
    trajet->ajoutPassager(passager, this);
    prix = trajet->getPrixInitial() * p->getReduction();
}

Billet::~Billet() {}
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
    return prix;
}
void Billet::setPrixInitial(int p)
{
    prix = p;
}
void Billet::Affiche()
{
    cout << "Voyageur:" << passager->getNom() << passager->getPrenom(); //<< t->Affiche() << endl
}
Passager *Billet::getPassager()
{
    return passager;
}

/*bool Billet::triTrajets(Trajet *t1, Trajet *t2)
{
    return t1 < t2;
}

class TriTrajets
{
public:
    bool operator()(const Trajet *t1,const Trajet *t2)
    {
        return t1 < t2;
    }
};*/

vector<Trajet *> Billet::getTrajets()
{
    sort(trajets.begin(), trajets.end(), TriTrajets());
    return trajets;
}

void Billet::ajoutTrajet(Trajet *trajet)
{
    trajet->ajoutPassager(passager, this);
}