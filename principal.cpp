#include"compagnie.hpp"
#include"passager.hpp"
#include"personnel.hpp"
#include"trajet.hpp"
#include"billet.hpp"
#include"navire.hpp"
#include"escales.hpp"

#include"iostream"
#include"string"
#include"vector"


using namespace std;

int main(void){
    Compagnie *compagnie;
    compagnie = new(1, "Spirit Waterways");

    NavirePassager *nav1, *nav2;
    NavireFret *nav3;

    Capitaine *c1;
    c1 = new Personnel();
    c1->setNom("Jack");

    nav1 = new Navire();
    nav1->setId(1); 
    nav1->setNom("Titanic");
    nav1->setCapitaine(c1);

    compagnie->AfficheNavires();
    compagnie->AffichePersonnels();

    return 0;

}