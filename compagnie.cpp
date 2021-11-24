#include"compagnie.hpp"
#include"personnel.hpp"
#include"navire.hpp"
#include"billet.hpp"
#include"trajet.hpp"
#include"escales.hpp"

vector<Personnel*>Compagnie::ToutPersonnels;
vector<Navire*>Compagnie::ToutNavires;
vector<Billet*>Compagnie::ToutBillets;
vector<Trajet*>Compagnie::ToutTrajets;
vector<Escales*>Compagnie::ToutEscales;

vector<Personnel*>::iterator itp;
vector<Navire*>::iterator itn;
vector<Billet*>::iterator itb;
vector<Trajet*>::iterator itt;
vector<Escales*>::iterator ite;

Compagnie::Compagnie(int i, string n){
    Id = i;
    Nom = i;
}
int Compagnie::getId(){
    return Id;
}
string Compagnie::getNom(){
    return Nom;
}
void Compagnie::AjoutPersonnel(Personnel *p){
    ToutPersonnels.push_back(p);
}
void Compagnie::AjoutNavire(Navire *n){
    ToutNavires.push_back(n);
}
void Compagnie::AjoutBillets(Billet *b){
    ToutBillets.push_back(b);
}
void Compagnie::AjoutTrajet(Trajet *t){
    ToutTrajets.push_back(t);
}
void Compagnie::AffichePersonnels(){
    for(itp = ToutPersonnels.begin(); itp != ToutPersonnels.end(); itp++){
        cout << (*itp)->getNom() << (*itp)->getPrenom() << endl;
    }
}
void Compagnie::AfficheNavires(){
    for(itn = ToutNavires.begin(); itn != ToutNavires.end(); itn++){
        cout << (*itn)->getNom() << endl;
    }
}
void Compagnie::AfficheBillets(){
    for(itb = ToutBillets.begin(); itb != ToutBillets.end(); itb++){
        cout << (*itb)->getPassager() << (*itb)->getTrajet() << endl;
    }
}
void Compagnie::AfficheTrajets(){
    for(itt = ToutTrajets.begin(); itt != ToutTrajets.end(); it++){
        cout << (*itt)->Affiche();
    }
}

void Compagnie::AfficheEscales(){
    for(ite = ToutEscales.begin(); ite != ToutEscales.end(); ite++){
        cout << (*ite)->getNom() << endl;
    }
}