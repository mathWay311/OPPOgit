#include <stdio.h>
#include <iostream>

double my_pow(double value, unsigned int power)
{
    double val = value;
    for (int i = 1; i < power; i++) val *= value;
    return val;
}

int main()
{
    
    std::cout << my_pow(3,3);

    return 0;
}
