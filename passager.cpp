#include"passager.hpp"
#include"billet.hpp"
#include"trajet.hpp"
#include<vector>

using namespace std;

Passager::Passager(int i, string n, string p, string c){
    Id = i;
    Nom = n;
    Prenom = p;
    Categorie = c;
    if(Categorie == "Insulaire"){
        Reduction = 0;
    }else if(Categorie == "Insulaire secondaire"){
        Reduction = 0.25;
    }else if(Categorie == "Normal"){
        Reduction = 0.50;
    }else{
        Reduction = 0.50;
    }
}
Passager::Passager(int i, string n, string p, string c, Billet* b){
    Id = i;
    Nom = n;
    Prenom = p;
    Categorie = c;
    BilletPassager.push_back(b);
    if(Categorie == "Insulaire"){
        Reduction = 0;
    }else if(Categorie == "Insulaire secondaire"){
        Reduction = 0.25;
    }else if(Categorie == "Normal"){
        Reduction = 0.50;
    }else{
        Reduction = 0.50;
    }
}
Passager::~Passager(){}
int Passager::getId(){
    return Id;
}
string Passager::getNom()const{
    return Nom;
}
string Passager::getPrenom()const{
    return Prenom;
}
string Passager::getCategorie()const{
    return Categorie;
}
void Passager::getBillets(){
    vector <Billet*>::iterator it;
    for(it=BilletPassager.begin(); it != BilletPassager.end(); it++){
        (*it)->Affiche();
    }
}
void Passager::setNom(string n){
    Nom = n;
}
void Passager::setPrenom(string p){
    Prenom = p;
}
void Passager::setCategorie(string c){
    Categorie = c;
}
void Passager::ajoutBillet(Billet *b){
    BilletPassager.push_back(b);
}