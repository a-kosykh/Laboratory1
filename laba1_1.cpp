#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int x=0; // Определение переменных
    double z=0; // Определение переменных
    // Ввод переменных
    cout << "x = ";
    cin >> x;
    if (x==-3) cout << "Данный x не входит в ОДЗ" << endl; // Вывод сообщения для 'x', который не входит в ОДЗ
    else {
        z = (sqrt((pow(x, 2)) + (2 * x) + 1) / (x + 3)); // Выражение
        cout << "Ответ: " << z << endl; // Вывод ответа
    }
    return 0;
}

