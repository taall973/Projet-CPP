#include"navire.hpp"
#include"personnel.hpp"

using namespace std;
        
Navire::Navire(int i, string n){
    Id = i;
    Nom = n;
}
int Navire::getId(){
    return Id;
}
string Navire::getNom(){
    return Nom;
}
int Navire::getTonnage(){
    return Tonnage;
}
int Navire::getCapaciteMarchandise(){
    return CapaciteMarchandise;
}
int Navire::getMaxSeconds(){
    return MaxSeconds;
}
int Navire::getMaxMatelots(){
    return MaxMatelots;
}
Capitaine Navire::getCapitaine(){
    return *c;
}
void Navire::setId(int i){
    Id = i;
}
void Navire::setNom(string n){
    Nom = n;
}
void Navire::setTonnage(int t){
    Tonnage = t;
}
void Navire::setCapaciteMarchandise(int c){
    CapaciteMarchandise = c;
}
void Navire::setMaxSeconds(int ms){
    MaxSeconds = ms;
}
void Navire::setMaxMatelots(int mm){
    MaxMatelots = mm;
}
void Navire::setCapitaine(Capitaine * cap){
    c = cap;
}