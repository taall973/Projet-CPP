#include "date.hpp"
#include "compagnie.hpp"
#include "passager.hpp"
#include "personnel.hpp"
#include "trajet.hpp"
#include "billet.hpp"
#include "navire.hpp"
#include "escales.hpp"

#include "iostream"
#include "string"
#include "vector"

using namespace std;

int main(void)
{
    Compagnie compagnie(1, "Spirit Waterways");

    cout << "1" << endl;

    cout << compagnie.getNom() << endl;
    Capitaine *c1;
    c1->setNom("Jack");

    Navire nav1(1, "Titanic");
    nav1.setCapitaine(c1);

    compagnie.AjoutNavire(&nav1);

    compagnie.AfficheNavires();
    compagnie.AffichePersonnels();

    Date d1(220, 555, 222), d2(14,22,22);

    d1 = d2;

    cout << d1 << endl;

    return 0;
}