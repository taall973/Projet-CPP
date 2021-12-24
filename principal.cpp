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

    //Création de Personnel
    string Noms[8] = {"Jack", "Joel", "Poole", "Ryan", "Ethan", "Laine", "Harry", "Seth"};
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
    //cout << c1->getId() << " " << c1->getNom() << c1->getCompagnie() << endl;

    //Création de Navire
    //Navire *nav = new Navire[3];
    Navire nav1(14, "Titanic", &compagnie);
    Navire nav2(24, "Liberty", &compagnie);
    Navire nav3(56, "Spirit", &compagnie);
    
    nav1.setCapitaine(c1);
    nav1.ajouterSecond(s1);
    nav1.ajouterMatelot(m1);

    //Création de Escales
    Escales es1(7, "Nice", 20);
    Escales es2(12, "Toulouse", 30);
    Escales es3(33, "Brighton", 60);

    //Création de Trajets
    Trajet tr1(es1.getNom(), es3.getNom(), 100, &nav1);
    
    //Création de Passagers
    Passager pass1(4, Noms[4], Noms[5], "Insulaire");

    //Billets
    Billet b1(10, &pass1, &tr1);
    
    //Compagnie
    compagnie.AfficheNavires();
    compagnie.AffichePersonnels();
    cout << "Trajets" << endl;
    compagnie.AfficheTrajets();
    compagnie.AfficheBillets();

    Date d1(22, 55, 22), d2(14,22,22);

    //d1 = d2;

    cout << d1 << endl;

    return 0;
}