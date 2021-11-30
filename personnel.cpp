#include "personnel.hpp"
#include "compagnie.hpp"

using namespace std;

Personnel::Personnel() {}
Personnel::Personnel(int i, string n, string p)
{
    id = i;
    nom = n;
    prenom = p;
    compagnie->AjoutPersonnel(this);
}
string Personnel::getNom()
{
    return nom;
}
string Personnel::getPrenom()
{
    return prenom;
}
void Personnel::setNom(string n)
{
    nom = n;
}
void Personnel::setPrenom(string p)
{
    prenom = p;
}

Capitaine::Capitaine()
{
    role = "Capitaine";
}

Second::Second()
{
    role = "Second";
}

Matelot::Matelot()
{
    role = "Matelot";
}
