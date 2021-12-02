#include "personnel.hpp"
#include "compagnie.hpp"

using namespace std;

Personnel::Personnel(){}
Personnel::Personnel(Compagnie *c)
{
    compagnie->AjoutPersonnel(this);
}
Personnel::Personnel(int i, string n, string p)
{
    id = i;
    nom = n;
    prenom = p;
    compagnie->AjoutPersonnel(this);
}
Personnel::~Personnel(){}
int Personnel::getId(){
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
void Personnel::setId(int i){
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
void Personnel::setCompagnie(Compagnie* c)
{
    compagnie = c;
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
