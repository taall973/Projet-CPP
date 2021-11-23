#include"escales.hpp"

using namespace std;
vector <Escales*>Escales::ToutEscales;
vector<Escales*>::iterator it;

Escales::Escales(int i, string n){
    Id = i;
    Nom = n;
    ToutEscales.push_back(this);
}
int Escales::getId(){
    return Id;
}
string Escales::getNom(){
    return Nom;
}
void Escales::setId(int i){
    Id = i;
}
void Escales::setNom(string n){
    Nom = n;
}
void Escales::Affiche(){
    for(it = ToutEscales.begin(); it != ToutEscales.end(); it++){
        cout << (*it)->getNom();
    }
}