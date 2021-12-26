#include "personnel.hpp"

using namespace std;

Personnel::Personnel(int i, string n, string p, Compagnie *c) : id(i), nom(n), prenom(p), compagnie(c)
{
    id = i;
    nom = n;
    prenom = p;
    compagnie->AjoutPersonnel(this);
}
Personnel::~Personnel() {}
int Personnel::getId()
{
    return id;
}
string Personnel::getNom()
{
    return nom;
}
string Personnel::getPrenom()
{
    return prenom;
}
string Personnel::getCompagnie()
{
    return compagnie->getNom();
}
void Personnel::setId(int i)
{
    id = i;
}
void Personnel::setNom(string n)
{
    nom = n;
}
void Personnel::setPrenom(string p)
{
    prenom = p;
}
void Personnel::setCompagnie(Compagnie *c)
{
    compagnie = c;
    c->AjoutPersonnel(this);
}

Capitaine::Capitaine(int i, string n, string p, Compagnie *c, int t) : Personnel(i, n, p, c), tonnageMax(t)
{
}

Second::Second(int i, string n, string p, Compagnie *c, int t) : Personnel(i, n, p, c), tonnageMax(t)
{
}

Matelot::Matelot(int i, string n, string p, Compagnie *c) : Personnel(i, n, p, c)
{
}

int Capitaine::getTonnage()
{
    return tonnageMax;
}

int Second::getTonnage()
{
    return tonnageMax;
}

/*bool Personnel::triTrajets(Trajet *t1, Trajet *t2)
{
    return t1 < t2;
}*/

vector<Trajet *> Personnel::getTrajets(int mois)
{

    vector<Trajet *> trajetsMois;
    vector<Trajet *>::iterator iTtrajetsMois;
    for (iTtrajetsMois = trajets.begin(); iTtrajetsMois != trajets.end(); iTtrajetsMois++)
    {
        if ((*iTtrajetsMois)->getDateD()->getMois() == mois)
        {
            trajetsMois.push_back((*iTtrajetsMois));
        }
    }

    sort(trajetsMois.begin(), trajetsMois.end(), TriTrajets());
    return trajetsMois;
}
