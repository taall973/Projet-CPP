#include <iostream>
#include <string>
#include <vector>

#include "date.hpp"
#include "compagnie.hpp"
#include "passager.hpp"
#include "personnel.hpp"
#include "trajet.hpp"
#include "billet.hpp"
#include "navire.hpp"
#include "escales.hpp"

using namespace std;

int main()
{
    Compagnie compagnie(101, "Spirit Waterways");
    string Escales[6] = {};

    //Création de Personnel
    string Noms[6] = {"Jack", "Joel", "Poole", "Ryan", "Ethan", "Laine", "Harry", "Seth"};
    Personnel *p = new Personnel[6];
    for(int i = 0; i < 5; i++){
        p[i].setCompagnie(&compagnie);
        p[i].setId(i);
        p[i].setNom(Noms[i]);
    }
    Capitaine *c1 = (Capitaine*) &p[0];
    Second *s1 = (Second *) &p[1];
    Matelot *m1 = (Matelot *) &p[2];

    //cout << p[1].getId() << " " << p[1].getCompagnie() << " " << p[1].getNom() << endl;
    cout << c1->getId() << " " << c1->getNom() << endl;

    //Création de Navire
    //Navire *nav = new Navire[3];
    string NomsNav[3] = {"Titanic", "Liberty", "Spirit"};
    Navire nav1(14, "Titanic", &compagnie);
    Navire nav2(24, "Liberty", &compagnie);
    Navire nav3(56, "Spirit", &compagnie);

    cout << nav1.getNom() << endl;
    
    //nav1.setCapitaine(&c1);

    compagnie.AfficheNavires();
    compagnie.AffichePersonnels();

    //Date d1(220, 555, 222), d2(14,22,22);

    //d1 = d2;

    //cout << d1 << endl;

    return 0;
}