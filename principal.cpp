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

    cout << compagnie.getNom() << endl;
    Personnel *c1;
    c1 = new Capitaine();
    c1->setNom("Jack");
    c1->setId(47);
    c1->setCompagnie(&compagnie);

    cout << c1->getId() << endl;

    Navire nav1;
    nav1.setCompagnie(&compagnie);
    nav1.setId(1);
    nav1.setNom("Titanic");

    cout << nav1.getNom() << endl;
    
    //nav1.setCapitaine(&c1);

    compagnie.AjoutNavire(&nav1);

    compagnie.AfficheNavires();
    compagnie.AffichePersonnels();

    //Date d1(220, 555, 222), d2(14,22,22);

    //d1 = d2;

    //cout << d1 << endl;

    return 0;
}