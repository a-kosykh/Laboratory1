#include <iostream>
#include <math.h>
#include <STDLIB.H>
using namespace std;
int main()
{
    int x;
    double z;
    std::cout << "x = ";
    std::cin >> x;
    if (x==3) std::cout << "Данный x не входит в ОДЗ";
    else {
        z = (sqrt((pow(x, 2)) + (2 * x) + 1) / (x + 3));
        std::cout << z;
    }
}