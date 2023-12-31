﻿// Метод деления интервала пополам.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
//целевая функция
double f(double x) {
    return (200 / x) + ((9 * x) / 2);
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, eps = 0.0001;
    double xc, yc, x1, x2, y1, y2, x, fx;
    int k = 0;
    cout << "Введите левую границу а = ";
    cin >> a;
    cout << "Введите правую границу b = ";
    cin >> b;
    xc = (a + b) / 2;
    yc = f(xc);
    while (b - a > eps) {

        x1 = a + (b - a) / 4;
        x2 = b - (b - a) / 4;
        y1 = f(x1);
        y2 = f(x2);
        if (y1 == y2) {
            a = x1;
            b = x2;
        }
        else {
            if (y1 < yc) {
                b = xc;
                xc = x1;
                yc = y1;
            }
            else {
                a = xc;
                xc = x2;
                yc = y2;
            }
        }
        k++;
        cout << "k = " << k << " x = " << xc << " x1 = " << x1 << " x2 = " << x2 << " f(x1) = " << f(x1) << " f(x2) = " << f(x2) << " a = " << a << " b = " << b << " "<<f(xc)<< endl;
    }
    x = xc;
    fx = f(x);
    cout << "Оптимальный размер стержня x = " << x << " при минимизированной силе, приложенной к краю стержня f = " << fx;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
