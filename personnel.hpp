#ifndef PERSONNEL_HPP
#define PERSONNEL_HPP

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Personnel{
    int Id;
    string Nom, Prenom;
    static vector <Personnel> ToutPersonnels;
    public:
        Personnel(int,string, string);
        string getNom();
        string getPrenom();
        void setNom(string);
        void setPrenom(string);

};

class Capitaine:public Personnel{
    string Role;
    public:
        Capitaine();
};

class Second:public Personnel{
    string Role;
    public:
        Second();
};

class Matelot:public Personnel{
    string Role;
    public:
        Matelot();
};

#endif