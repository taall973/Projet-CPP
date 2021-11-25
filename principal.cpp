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
    compagnie = new Compagnie(1, "Spirit Waterways");

    cout << "1" << endl;

    NavireFret *nav3;

    Capitaine *c1;
    c1->setNom("Jack");

    Navire nav1(1, "Titanic");
    nav1.setCapitaine(c1);

    compagnie->AjoutNavire(&nav1);
    
    compagnie->AfficheNavires();
    compagnie->AffichePersonnels();

    

    return 0;

}