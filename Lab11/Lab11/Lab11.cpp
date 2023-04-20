#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    //Задание 1
    cout << "Задание 1" << endl;
    int a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    if (a == b) {
        a = 0;
        b = 0;
    }
    else if (a > b) {
        b = a;
        a = a;
    }
    else {
        b = b;
        a = b;
    }
    cout << "Новое значение a: " << a << endl;
    cout << "Новое значение b: " << b << endl;
    //Задание 2
    cout << "Задание 2" << endl;
    int a1, b1, c1, res;
    cout << "Введите первое число: ";
    cin >> a1;
    cout << "Введите второе число: ";
    cin >> b1;
    cout << "Введите третье число: ";
    cin >> c1;
    if (a1 >= c1 && b1 >= c1) {
        res = a1 + b1;
    }
    else if (b1 >= a1 && c1 >= a1) {
        res = b1 + c1;
    }
    else if (a1 >= b1 && c1 >= b1) {
        res = a1 + c1;
    }
    cout << "Сумма двух наибольших чисел: " << res << endl;
    //Задание 3
    cout << "Задание 3" << endl;
    int x1, x2, x3, y1, y2, y3;
    cout << "Введите координату x точки A: ";
    cin >> x1;
    cout << "Введите координату y точки A: ";
    cin >> y1;
    cout << "Введите координату x точки B: ";
    cin >> x2;
    cout << "Введите координату y точки B: ";
    cin >> y2;
    cout << "Введите координату x точки C: ";
    cin >> x3;
    cout << "Введите координату y точки C: ";
    cin >> y3;
    double r1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double r2 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    if (r1 < r2) {
        cout << "Точка B ближе к точке A, расстояние между точками: " << r1 << endl;
    }
    else {
        cout << "Точка C ближе к точке A, расстояние между точками: " << r2 << endl;
    }
    //Задание 4
    cout << "Задание 4" << endl;
    int x4, y4;
    cout << "Введите координату x: ";
    cin >> x4;
    cout << "Введите координату y: ";
    cin >> y4;
    if (x4 > 0 && y4 > 0) {
        cout << "Точка находится в первой четверти" << endl;
    }
    else if (x4 < 0 && y4 > 0) {
        cout << "Точка находится во второй четверти" << endl;
    }
    else if (x4 < 0 && y4 < 0) {
        cout << "Точка находится в третьей четверти" << endl;
    }
    else if (x4 > 0 && y4 < 0) {
        cout << "Точка находится в четвертой четверти" << endl;
    }
    //Задание 5
    cout << "Задание 5" << endl;
    int n;
    cout << "Введите число: ";
    cin >> n;
    if (n == 0) {
        cout << "Нулевое число" << endl;
    }
    else {
        if (n < 0) {
            cout << "Отрицательное ";
        }
        else {
            cout << "Положительное ";
        }
        if (n % 2 == 0) {
            cout << "четное число" << endl;
        }
        else {
            cout << "нечетное число" << endl;
        }
    }
    //Задание 6
    cout << "Задание 6" << endl;
    int n1;
    cout << "Введите число: ";
    cin >> n1;
    if (n1 % 2 == 0) {
        cout << "Четное ";
    }
    else {
        cout << "Нечетное ";
    }
    if (n1 / 100 != 0) {
        cout << "трехзначное число" << endl;
    }
    else if (n1 / 10 != 0) {
        cout << "двузначное число" << endl;
    }
    else {
        cout << "однозначное число" << endl;
    }
}