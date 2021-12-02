#include "date.hpp"

using namespace std;

Date::Date(int h, int m, int s) : hh(h % 24), mm(m % 60), ss(s % 60)
{
}
Date::~Date(){}
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
    flux << d.hh << d.mm << d.ss;
    return flux;
}