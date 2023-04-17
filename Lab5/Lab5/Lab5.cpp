#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "Russian");
    //Задание 1
    cout << "Задание 1" << endl;
    double x1, x2, y1, y2;
    cout << "Введите координату x1: ";
    cin >> x1;
    cout << "Введите координату y1: ";
    cin >> y1;
    cout << "Введите координату x2: ";
    cin >> x2;
    cout << "Введите координату y2: ";
    cin >> y2;
    double dist = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    cout << "Расстояние между точками: " << dist << endl;
    //Задание 2
    cout << "Задание 2" << endl;
    double a, b, c;
    cout << "Введите точку a: ";
    cin >> a;
    cout << "Введите точку b: ";
    cin >> b;
    cout << "Введите точку c: ";
    cin >> c;
    double ac = c - a;
    double bc = c - b;
    double sum = ac + bc;
    cout << "Длина отрезка AC: " << ac << endl;
    cout << "Длина отрезка BC: " << bc << endl;
    cout << "Сумма отрезков AC и BC: " << sum << endl;
    //Задание 3
    cout << "Задание 3" << endl;
    double a1, b1, c1;
    cout << "Введите точку a: ";
    cin >> a1;
    cout << "Введите точку b: ";
    cin >> b1;
    cout << "Введите точку c: ";
    cin >> c1;
    double mult = (c1 - a1) * (b1 - c1);
    cout << "Произведение длин отрезков AC и BC: " << mult << endl;
    //Задание 4
    cout << "Задание 4" << endl;
    double x3, x4, y3, y4;
    cout << "Введите координату x1: ";
    cin >> x3;
    cout << "Введите координату y1: ";
    cin >> y3;
    cout << "Введите координату x2: ";
    cin >> x4;
    cout << "Введите координату y2: ";
    cin >> y4;
    double a2 = y4 - y3;
    double b2 = x4 - x3;
    double P = (a2 + b2) * 2;
    double S = a2 * b2;
    cout << "Периметр: " << P << endl;
    cout << "Площадь: " << S << endl;
    //Задание 5
    cout << "Задание 5" << endl;
    double x5, x6, x7, y5, y6, y7;
    cout << "Введите координату x1: ";
    cin >> x5;
    cout << "Введите координату y1: ";
    cin >> y5;
    cout << "Введите координату x2: ";
    cin >> x6;
    cout << "Введите координату y2: ";
    cin >> y6;
    cout << "Введите координату x3: ";
    cin >> x7;
    cout << "Введите координату y3: ";
    cin >> y7;
    double s1 = sqrt(((x5 - x6) * (x5 - x6)) + ((y5 - y6) * (y5 - y6)));
    double s2 = sqrt(((x7 - x6) * (x7 - x6)) + ((y7 - y6) * (y7 - y6)));
    double s3 = sqrt(((x7 - x5) * (x7 - x5)) + ((y5 - y7) * (y5 - y7)));
    double P1 = s1 + s2 + s3;
    double p = P1 / 2;
    double S1 = sqrt(p * (p - s1) * (p - s2) * (p - s3));
    cout << "Периметр: " << P1 << endl;
    cout << "Площадь: " << S1 << endl;
}