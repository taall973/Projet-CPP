/*Turikumwe Fabrice E.
Allan Tarcy*/
#include "date.hpp"

using namespace std;

Date::Date(int j, int mo, int a, int h, int m) : jour(j % 31), mois(m % 12), an(a % 9999), hh(h % 24), mm(m % 60)
{
}
Date::~Date(){
    
}
int Date::getJour()
{
    return jour;
}

int Date::getMois()
{
    return mois;
}

int Date::getAn()
{
    return an;
}

int Date::getHH()
{
    return hh;
}

int Date::getMM()
{
    return mm;
}

void Date::afficher(ostream &flux) const
{
    flux << jour << "/" << mois << "/" << an << " - " << hh << ":" << mm;
}

bool operator==(Date const &d1, Date const &d2)
{
    if (d1.an == d2.an && d1.mois == d2.mois && d1.jour == d2.jour && d1.hh == d2.hh && d1.mm == d2.mm)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator<(Date const &d1, Date const &d2)
{
    if (d1.an < d2.an)
    {
        return true;
    }
    else if (d1.an == d2.an && d1.mois < d2.mois)
    {
        return true;
    }
    else if (d1.an == d2.an && d1.mois == d2.mois && d1.jour < d2.jour)
    {
        return true;
    }
    else if (d1.an == d2.an && d1.mois == d2.mois && d1.jour == d2.jour && d1.hh < d2.hh)
    {
        return true;
    }
    else if (d1.an == d2.an && d1.mois == d2.mois && d1.jour == d2.jour && d1.hh == d2.hh && d1.mm < d2.mm)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream &operator<<(ostream &flux, Date const &d)
{
    d.afficher(flux);
    return flux;
}