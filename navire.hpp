#ifndef NAVIRE_HPP
#define NAVIRE_HPP

#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

class Personnel;
class Capitaine; class Second; class Matelot;
class Navire{
    int Id;
    string Nom;
    int Tonnage, CapaciteMarchandise, MaxSeconds, MaxMatelots;
    Capitaine *c;
    list <Second *> Seconds;
    list <Matelot *> Matelots;
};

#endif