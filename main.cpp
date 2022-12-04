#include <stdio.h>
#include <iostream>

double my_pow(double num, unsigned int deg) {
    long result = 1;
    while(deg) {
        if (deg % 2 == 0) {
            deg /= 2;
            num *= num;
        }
        else {
            deg--;
            result *= num;
        }
    }

    return result;
}

int main()
{
    
    std::cout << my_pow(3,3);

    return 0;
}
