#include"compagnie.hpp"
#include"passager.hpp"
#include"personnel.hpp"
#include"trajet.hpp"
#include"billet.hpp"
#include"navire.hpp"
#include"escales.hpp"

#include"compagnie.cpp"
#include"passager.cpp"
#include"personnel.cpp"
#include"trajet.cpp"
#include"billet.cpp"
#include"navire.cpp"
#include"escales.cpp"

#include"iostream"
#include"string"
#include"vector"


using namespace std;

int main(void){
    Compagnie *compagnie;
    compagnie = new Compagnie(1, "Spirit Waterways");

    NavireFret *nav3;

    Capitaine *c1;
    c1->setNom("Jack");

    Navire nav1(1, "Titanic")
    nav1->setCapitaine(c1);

    compagnie->AfficheNavires();
    compagnie->AffichePersonnels();

    return 0;

}