#include <iostream>
#include <stdlib.h>
#include <math.h>
int main() {
    int x, y, a, b;
    bool j = false;
    double n;
    std::cout << "Координата первой точки по оси X: ";
    std::cin >> x;
    std::cout << "Координата первой точки по оси Y: ";
    std::cin >> y;
    std::cout << "Координата второй точки по оси X: ";
    std::cin >> a;
    std::cout << "Координата второй точки по оси Y: ";
    std::cin >> b;
    if (x == 0)
    {
        if (y == 0)
        {
            if (a == 0)
            {
                if (b == 0)
                {
                    std::cout << "Расстояние равно 0" << std::endl;
                }
                else j = true;
            }
            else j = true;
        }
        else j = true;
    }
    else j = true;
    if (j)
    {
        n = sqrt(pow((x - a), 2) + pow((y - b), 2));
        if (n == 0) {
            std::cout << "Точки совпадают";
        } else {
            std::cout << "Расстояние от первой до второй точки: " << n << std::endl;
        }
        switch (x, y) {
            case 0 :
                std::cout << "Первая точка лежит на пересечении осей X и Y" << std::endl;
                break;
            default:
                std::cout << "";
        }
        switch (a, b) {
            case 0 :
                std::cout << "Вторая точка лежит на пересечении осей X и Y" << std::endl;
                break;
            default:
                std::cout << "";
        }
    }
    return 0;
}