#include"personnel.hpp"

using namespace std;

Personnel::Personnel(int i, string n, string p){
    Id = i;
    Nom = n;
    Prenom = p;
}
string Personnel::getNom(){
    return Nom;
}
string Personnel::getPrenom(){
    return Prenom;
}
void Personnel::setNom(string n){
    Nom = n;
}
void Personnel::setPrenom(string p){
    Prenom = p;
}

Capitaine::Capitaine(){
    Role = "Capitaine";
}

Second::Second(){
    Role = "Second";
}

Matelot::Matelot(){
    Role = "Matelot";
}