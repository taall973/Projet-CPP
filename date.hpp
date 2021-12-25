#ifndef DATE_HPP
#define DATE_HPP

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Date
{
private:
    int jour, mois, an, hh, mm;

public:
    Date(int j, int mo, int a, int h = 0, int m = 0);
    int getJour();
    int getMois();
    int getAn();
    int getHH();
    int getMM();
    friend bool operator==(Date const &d1, Date const &d2);
    friend bool operator<(Date const &d1, Date const &d2);
    friend ostream &operator<<(ostream &flux, Date const &d);
    void afficher(ostream &flux) const;
};

#endif