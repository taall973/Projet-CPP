#ifndef DATE_HPP
#define DATE_HPP

#include <string>
#include <iostream>
#include <vector>

class Date
{
private:
    int hh, mm, ss;

public:
    Date(int hh = 0, int mm = 0, int ss = 0);
};

#endif