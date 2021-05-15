#ifndef BASIC_
#define BASIC_
#include <iostream>

using namespace std;

struct basicmath
{
    int *input;
    basicmath(int &a) : input(&a) {}
    void squared(){*input = *input*  *input;}
    void exponent(int power);
};


void basicmath::exponent(int power)
{
    int x = *input;
    if(power == 0)
    {
        *input = 1;
    }
    else{
    while(power > 0)
    {
        *input *= x;
        power -=  1;
    }
    }
}

#endif