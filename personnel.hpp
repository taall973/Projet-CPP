#ifndef PERSONNEL_HPP
#define PERSONNEL_HPP

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Compagnie;
class Personnel
{
    int Id;
    string Nom, Prenom;
    Compagnie *c;

public:
    Personnel();
    Personnel(int, string, string);
    string getNom();
    string getPrenom();
    void setNom(string);
    void setPrenom(string);
};

class Capitaine : public Personnel
{
    string Role;

public:
    Capitaine();
};

class Second : public Personnel
{
    string Role;

public:
    Second();
};

class Matelot : public Personnel
{
    string Role;

public:
    Matelot();
};

#endif