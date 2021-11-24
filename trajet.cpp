#include"trajet.hpp"
#include"billet.hpp"
#include"escales.hpp"
#include"passager.hpp"
#include"compagnie.hpp"

using namespace std;

Trajet::Trajet(string pd, string pa){
    portDepart = pd;
    portArrive = pa;
    c->AjoutTrajet(this);
}
void Trajet::ajoutEscales(Escales *e){
    escales.push_back(e);
}
void Trajet::ajoutPassager(Passager *p){
    LesPassagers.push_back(p);
}
string Trajet::getPortDepart(){
    return portDepart;
}
string Trajet::getPortArrive(){
    return portArrive;
}
void Trajet::setPortDepart(string pd){
    portDepart = pd;
}
void Trajet::setPortArrive(string pa){
    portArrive = pa;
}
void Trajet::afficheEscales(){
    vector<Escales*>::iterator it;
    for(it = escales.begin(); it != escales.end(); it++){
        cout << (*it)->getNom() << endl;
    }
}
void Trajet::affichePassagers(){
    vector<Passager*>::iterator it;
    for(it = LesPassagers.begin(); it != LesPassagers.end(); it++){
        cout << (*it)->getNom() << (*it)->getPrenom() << (*it)->getCategorie() << endl;
    }
}
void Trajet::Affiche(){
    cout << "Trajet:" << this->getPortDepart() << this->getPortArrive() << endl;
    this->afficheEscales();
    this->affichePassagers();
}
