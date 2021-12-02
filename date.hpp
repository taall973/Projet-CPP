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
    Date(int h = 0, int m = 0, int s = 0);
};

#endif