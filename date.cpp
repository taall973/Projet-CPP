#include "date.hpp"

using namespace std;

Date::Date(int j, int mo, int a, int h, int m, int s) : jour(j % 31), mois(m % 12), an(a), hh(h % 24), mm(m % 60), ss(s % 60)
{
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

int Date::getSS()
{
    return ss;
}

void Date::afficher(ostream &flux) const
{
    flux << jour << "/" << mois << "/" << an << " " << hh << ":" << mm << ":" << ss;
}

bool operator==(Date const &d1, Date const &d2)
{
    if (d1.hh == d2.hh && d1.mm == d2.mm && d1.ss == d2.ss)
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