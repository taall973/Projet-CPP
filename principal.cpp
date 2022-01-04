/*Turikumwe Fabrice E.
Allan Tarcy*/
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

    Compagnie compagnie(101, "Penn Ar Bed");

    //Instanciation des navires
    NavirePassager titanic(1, "Titanic", 100, 2, 2, 10, &compagnie, 44);
    NavireFret liberty(2, "Liberty", 120, 1, 1, 120, &compagnie);
    NavirePassager spirit(3, "Spirit", 500, 2, 2, 100, &compagnie, 200);

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

    //Instanciation des trajets de Mars
    Trajet mars_nice_marseille(&nice, &marseille, &titanic, new Date(11, 3, 21, 10, 21), new Date(12, 3, 21, 9, 21));
    Trajet mars_marseille_leHavre(&marseille, &leHavre, &spirit, new Date(15, 3, 21, 17, 45), new Date(18, 3, 21, 10, 41));
    Trajet mars_leHavre_dunkerque(&leHavre, &dunkerque, &liberty, new Date(19, 3, 21, 6, 50), new Date(19, 3, 21, 20, 10));
    Trajet mars_dunkerque_rouen(&dunkerque, &rouen, &titanic, new Date(24, 3, 21, 10, 55), new Date(25, 3, 21, 7, 30));
    Trajet mars_rouen_ajaccio(&rouen, &ajaccio, &liberty, new Date(24, 3, 21, 14, 59), new Date(26, 3, 21, 10, 21));

    //Instanciation des trajets d'Avril
    Trajet avril_marseille_nice(&marseille, &nice, &titanic, new Date(11, 4, 21, 10, 21), new Date(12, 4, 21, 9, 21));
    Trajet avril_leHavre_marseille(&leHavre, &marseille, &spirit, new Date(15, 4, 21, 17, 45), new Date(18, 4, 21, 10, 41));
    Trajet avril_dunkerque_leHavre(&dunkerque, &leHavre, &liberty, new Date(19, 4, 21, 6, 50), new Date(19, 4, 21, 20, 10));
    Trajet avril_rouen_dunkerque(&rouen, &dunkerque, &titanic, new Date(24, 4, 21, 10, 55), new Date(25, 4, 21, 7, 30));
    Trajet avril_ajaccio_rouen(&ajaccio, &rouen, &liberty, new Date(24, 4, 21, 14, 59), new Date(26, 4, 21, 10, 21));

    //Instanciation des trajets de Mai
    Trajet mai_nice_marseille(&nice, &marseille, &titanic, new Date(11, 5, 21, 10, 21), new Date(12, 5, 21, 9, 21));
    Trajet mai_marseille_leHavre(&marseille, &leHavre, &spirit, new Date(15, 5, 21, 17, 45), new Date(18, 5, 21, 10, 41));
    Trajet mai_leHavre_dunkerque(&leHavre, &dunkerque, &liberty, new Date(19, 5, 21, 6, 50), new Date(19, 5, 21, 20, 10));
    Trajet mai_dunkerque_rouen(&dunkerque, &rouen, &titanic, new Date(24, 5, 21, 10, 55), new Date(25, 5, 21, 7, 30));
    Trajet mai_rouen_ajaccio(&rouen, &ajaccio, &liberty, new Date(24, 5, 21, 14, 59), new Date(26, 5, 21, 10, 21));

    //Instanciation des trajets de Juin
    Trajet juin_marseille_nice(&marseille, &nice, &titanic, new Date(11, 6, 21, 10, 21), new Date(12, 6, 21, 9, 21));
    Trajet juin_leHavre_marseille(&leHavre, &marseille, &spirit, new Date(15, 6, 21, 17, 45), new Date(18, 6, 21, 10, 41));
    Trajet juin_dunkerque_leHavre(&dunkerque, &leHavre, &liberty, new Date(19, 6, 21, 6, 50), new Date(19, 6, 21, 20, 10));
    Trajet juin_rouen_dunkerque(&rouen, &dunkerque, &titanic, new Date(24, 6, 21, 10, 55), new Date(25, 6, 21, 7, 30));
    Trajet juin_ajaccio_rouen(&ajaccio, &rouen, &liberty, new Date(24, 6, 21, 14, 59), new Date(26, 6, 21, 10, 21));

    //Instanciation des trajets de Juillet
    Trajet juillet_nice_marseille(&nice, &marseille, &titanic, new Date(11, 7, 21, 10, 21), new Date(12, 7, 21, 9, 21));
    Trajet juillet_marseille_leHavre(&marseille, &leHavre, &spirit, new Date(15, 7, 21, 17, 45), new Date(18, 7, 21, 10, 41));
    Trajet juillet_leHavre_dunkerque(&leHavre, &dunkerque, &liberty, new Date(19, 7, 21, 6, 50), new Date(19, 7, 21, 20, 10));
    Trajet juillet_dunkerque_rouen(&dunkerque, &rouen, &titanic, new Date(24, 7, 21, 10, 55), new Date(25, 7, 21, 7, 30));
    Trajet juillet_rouen_ajaccio(&rouen, &ajaccio, &liberty, new Date(24, 7, 21, 14, 59), new Date(26, 7, 21, 10, 21));

    //Instanciation des trajets d'Aout
    Trajet aout_marseille_nice(&marseille, &nice, &titanic, new Date(11, 8, 21, 10, 21), new Date(12, 8, 21, 9, 21));
    Trajet aout_leHavre_marseille(&leHavre, &marseille, &spirit, new Date(15, 8, 21, 17, 45), new Date(18, 8, 21, 10, 41));
    Trajet aout_dunkerque_leHavre(&dunkerque, &leHavre, &liberty, new Date(19, 8, 21, 6, 50), new Date(19, 8, 21, 20, 10));
    Trajet aout_rouen_dunkerque(&rouen, &dunkerque, &titanic, new Date(24, 8, 21, 10, 55), new Date(25, 8, 21, 7, 30));
    Trajet aout_ajaccio_rouen(&ajaccio, &rouen, &liberty, new Date(24, 8, 21, 14, 59), new Date(26, 8, 21, 10, 21));

    //Instanciation des trajets de Septembre
    Trajet septembre_nice_marseille(&nice, &marseille, &titanic, new Date(11, 9, 21, 10, 21), new Date(12, 9, 21, 9, 21));
    Trajet septembre_marseille_leHavre(&marseille, &leHavre, &spirit, new Date(15, 9, 21, 17, 45), new Date(18, 9, 21, 10, 41));
    Trajet septembre_leHavre_dunkerque(&leHavre, &dunkerque, &liberty, new Date(19, 9, 21, 6, 50), new Date(19, 9, 21, 20, 10));
    Trajet septembre_dunkerque_rouen(&dunkerque, &rouen, &titanic, new Date(24, 9, 21, 10, 55), new Date(25, 9, 21, 7, 30));
    Trajet septembre_rouen_ajaccio(&rouen, &ajaccio, &liberty, new Date(24, 9, 21, 14, 59), new Date(26, 9, 21, 10, 21));

    //Instanciation des trajets d'Octobre
    Trajet octobre_marseille_nice(&marseille, &nice, &titanic, new Date(11, 10, 21, 10, 21), new Date(12, 10, 21, 9, 21));
    Trajet octobre_leHavre_marseille(&leHavre, &marseille, &spirit, new Date(15, 10, 21, 17, 45), new Date(18, 10, 21, 10, 41));
    Trajet octobre_dunkerque_leHavre(&dunkerque, &leHavre, &liberty, new Date(19, 10, 21, 6, 50), new Date(19, 10, 21, 20, 10));
    Trajet octobre_rouen_dunkerque(&rouen, &dunkerque, &titanic, new Date(24, 10, 21, 10, 55), new Date(25, 10, 21, 7, 30));
    Trajet octobre_ajaccio_rouen(&ajaccio, &rouen, &liberty, new Date(24, 10, 21, 14, 59), new Date(26, 10, 21, 10, 21));

    //Instanciation des passagers
    Passager brassens(1, "Brassens", "Georges");
    Passager aznavour(2, "Aznavour", "Charles");
    Passager piaf(3, "Piaf", "Edith");

    Insulaire obelix(1, "Obelix", "Asterix");
    Insulaire milou(2, "Milou", "Tintin");

    InsulaireSecondaire roumanoff(1, "Roumanoff", "Anne");
    InsulaireSecondaire tagbo(2, "Tagbo", "Claudia");

    //Instanciation des billets
    Billet billetBrassens(1, &brassens, &mars_nice_marseille);
    Billet billetAznavour(2, &aznavour, &mars_marseille_leHavre);
    Billet billetPiaf(3, &piaf, &mars_leHavre_dunkerque);
    Billet billetObelix(4, &obelix, &mars_dunkerque_rouen);
    Billet billetMilou(5, &milou, &mars_rouen_ajaccio);
    Billet billetRoumanoff(6, &roumanoff, &avril_marseille_nice);
    Billet billetTagbo(7, &tagbo, &avril_leHavre_marseille);

    compagnie.AfficheNavires();
    compagnie.AffichePersonnels();
    compagnie.AfficheTrajets();
    compagnie.AfficheBillets();

    return 0;
}