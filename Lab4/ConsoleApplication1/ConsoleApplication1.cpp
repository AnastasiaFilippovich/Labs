#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    //Задание 1
    std::cout << "Задание 1" << endl;
    int a;
    int b;
    std::cout << "Введите сторону a: ";
    std::cin >> a;
    std::cout << "Введите сторону b: ";
    std::cin >> b;
    int S = a * b;
    int P = (a + b) * 2;
    std::cout << "Площадь: " << S << endl;
    std::cout << "Периметр: " << P << endl;
    //Задание 2
    std::cout << "Задание 2" << endl;
    int d;
    std::cout << "Введите диаметр окружности d: ";
    std::cin >> d;
    float pi = 3.14f;
    float l = pi * d;
    std::cout << "Длина окружности: " << l << endl;
    //Задание 3
    std::cout << "Задание 3" << endl;
    float a1;
    float b1;
    std::cout << "Введите число a: ";
    std::cin >> a;
    std::cout << "Введите число b: ";
    std::cin >> b;
    float sr = (a + b) / 2.0f;
    std::cout << "Среднее арифметическое: " << sr << endl;
    //Задание 4
    std::cout << "Задание 4" << endl;
    float c;
    float g;
    std::cout << "Введите число 1: ";
    std::cin >> c;
    std::cout << "Введите число 2: ";
    std::cin >> g;
    float c2 = c * c;
    float g2 = g * g;
    float sum1 = c2 + g2;
    float sub1 = c2 - g2;
    float mul1 = c2 * g2;
    float div1 = c2 / g2;
    std::cout << "Сумма: " << sum1 << endl;
    std::cout << "Разность: " << sub1 << endl;
    std::cout << "Произведение: " << mul1 << endl;
    std::cout << "Частное: " << div1 << endl;
    //Задание 5
    std::cout << "Задание 5" << endl;
    float e;
    float f;
    std::cout << "Введите число 1: ";
    std::cin >> e;
    std::cout << "Введите число 2: ";
    std::cin >> f;
    float e2 = abs(e);
    float f2 = abs(f);
    float sum2 = e2 + f2;
    float sub2 = e2 - f2;
    float mul2 = e2 * f2;
    float div2 = e2 / f2;
    std::cout << "Сумма: " << sum2 << endl;
    std::cout << "Разность: " << sub2 << endl;
    std::cout << "Произведение: " << mul2 << endl;
    std::cout << "Частное: " << div2 << endl;
}