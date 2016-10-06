#include <iostream>
#include <math.h>
#include <STDLIB.H>
using namespace std;
int main()
{
    int x; // Определение переменных
    double z; // Определение переменных
    // Ввод переменных
    std::cout << "x = ";
    std::cin >> x;
    if (x==-3) std::cout << "Данный x не входит в ОДЗ"; // Вывод сообщения для 'x', который не входит в ОДЗ
    else {
        z = (sqrt((pow(x, 2)) + (2 * x) + 1) / (x + 3)); // Выражение
        std::cout << "Ответ: " << z; // Вывод ответа
    }
}
