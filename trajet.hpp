#ifndef TRAJET_HPP
#define TRAJET_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Passager;
class Trajet
{
    //Je pense c'est mieux si on fait une classe des escales qui sera lie avec
    //les trajets comme ca, on fera une trajet d'une list static de tout les escales
    //et une trajet prendra celles ou il passera slm
    static vector<Trajet *> ToutEscales;
    vector<Trajet *> escales;
    string portArrive, portDepart;
    vector<Passager *> LesPassagers;
    //Date et Temps
public:
    void Affiche();
};

#endif