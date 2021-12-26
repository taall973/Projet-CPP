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

    //Instanciation des navires
    Navire titanic(1, "Titanic", 100, 2, 2, 10, &compagnie, 44);
    Navire liberty(2, "Liberty", 120, 1, 1, 120, &compagnie);
    Navire spirit(3, "Spirit", 500, 2, 2, 100, &compagnie, 200);

    //Instanciation du personnel
    Capitaine sparrow(1, "Sparrow", "Jack", &compagnie, 100);
    Capitaine sharif(2, "Sharif", "Omar", &compagnie, 120);

    Second gardner(1, "Gardner", "Eva", &compagnie, 120);
    Second belmondo(2, "Sharif", "Omar", &compagnie, 100);

    Matelot daly(1, "Daly", "Ruby", &compagnie);
    Matelot aufray(2, "Aufray", "Hugues", &compagnie);

    //Instanciation des escales
    Escales nice(1, "Nice", 26);
    Escales marseille(2, "Marseille", 23);
    Escales leHavre(3, "Le Havre", 22);
    Escales dunkerque(4, "Dunkerque", 18);
    Escales rouen(5, "Rouen", 21);
    Escales ajaccio(6, "Ajaccio", 30);

    //Instanciation des trajets

    string Noms[8] = {"Jack", "Joel", "Poole", "Ryan", "Ethan", "Laine", "Harry", "Seth"};
    Personnel *p = new Personnel[6];
    for (int i = 0; i < 5; i++)
    {
        p[i].setCompagnie(&compagnie);
        p[i].setId(i);
        p[i].setNom(Noms[i]);
    }
    Capitaine *c1 = (Capitaine *)&p[0];
    Second *s1 = (Second *)&p[1];
    Matelot *m1 = (Matelot *)&p[2];

    //cout << p[1].getId() << " " << p[1].getCompagnie() << " " << p[1].getNom() << endl;
    //cout << c1->getId() << " " << c1->getNom() << c1->getCompagnie() << endl;

    //Création de Navire
    //Navire *nav = new Navire[3];
    Navire nav1(14, "Titanic");
    Navire nav1(14, "Titanic", 100, 10, 44);
    Navire nav2(24, "Liberty", &compagnie);
    Navire nav3(56, "Spirit", &compagnie);
    compagnie.AjoutNavire(&nav1);

    nav1.setCapitaine(c1);
    nav1.ajouterSecond(s1);
    nav1.ajouterMatelot(m1);

    //Création de Escales
    Escales es1(7, "Nice", 20);
    Escales es2(12, "Toulouse", 30);
    Escales es3(33, "Brighton", 60);

    //Création de Trajets

    Date d1(25, 45, 500, 22444, 54455, 25542);
    Date d2(85, 4445, 55300, 252444, 5554455, 285542);

    Trajet tr1(es1.getNom(), es3.getNom(), 100, &nav1, &d1, &d2);

    //Création de Passagers
    Passager pass1(4, Noms[4], Noms[5], "Insulaire");

    //Billets
    Billet b1(10, &pass1, &tr1);

    //Compagnie
    compagnie.AfficheNavires();
    compagnie.AffichePersonnels();
    compagnie.AfficheTrajets();
    compagnie.AfficheBillets();

    //d1 = d2;

    cout << d1 << endl;
    * /

        Insulaire test(1, "X", "man");
    Passager e(2, "ee", "d");

    cout << e.getReduction() << endl;
    cout << test.getReduction() << endl;

    return 0;
}