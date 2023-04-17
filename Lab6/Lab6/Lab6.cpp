#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    //Задание 1
    cout << "Задание 1" << endl;
    double a, b;
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    double c = a;
    a = b;
    b = c;
    cout << "Новое значение a: " << a << endl;
    cout << "Новое значение b: " << b << endl;
    //Задание 2
    cout << "Задание 2" << endl;
    double a1, b1, c1;
    cout << "Введите значение a: ";
    cin >> a1;
    cout << "Введите значение b: ";
    cin >> b1;
    cout << "Введите значение c: ";
    cin >> c1;
    double d = a1;
    a1 = c1;
    c1 = b1;
    b1 = d;
    cout << "Новое значение a: " << a1 << endl;
    cout << "Новое значение b: " << b1 << endl;
    cout << "Новое значение c: " << c1 << endl;
    //Задание 3
    cout << "Задание 3" << endl;
    double a2, b2, c2;
    cout << "Введите значение a: ";
    cin >> a2;
    cout << "Введите значение b: ";
    cin >> b2;
    cout << "Введите значение c: ";
    cin >> c2;
    double d1 = b2;
    b2 = c2;
    c2 = a2;
    a2 = d1;
    cout << "Новое значение a: " << a2 << endl;
    cout << "Новое значение b: " << b2 << endl;
    cout << "Новое значение c: " << c2 << endl;
    //Задание 4
    cout << "Задание 4" << endl;
    double x;
    cout << "Введите значение x: ";
    cin >> x;
    double y = 3 * (x * x * x * x * x * x) - 6 * (x * x) - 7;
    cout << "Значение функции: " << y << endl;
    //Задание 5
    cout << "Задание 5" << endl;
    double x1;
    cout << "Введите значение x: ";
    cin >> x1;
    double y1 = 4 * ((x1 - 3) * (x1 - 3) * (x1 - 3) * (x1 - 3) * (x1 - 3) * (x1 - 3)) - 7 * ((x1 - 3) * (x1 - 3) * (x1 - 3)) + 2;
    cout << "Значение функции: " << y1 << endl;
    //Задание 6
    cout << "Задание 6" << endl;
    double a3;
    cout << "Введите значение a: ";
    cin >> a3;
    double b3 = a3 * a3;
    double result = b3 * b3 * b3 * b3;
    cout << a3 << " в степени 8: " << result << endl;
    //Задание 7
    cout << "Задание 7" << endl;
    double a4;
    cout << "Введите значение a: ";
    cin >> a4;
    double b4 = a4 * a4 * a4;
    double c4 = b4 * b4;
    double result2 = c4 * c4 * b4;
    cout << a4 << " в степени 15: " << result2 << endl;
}