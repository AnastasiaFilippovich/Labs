#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    //Задание 1
    cout << "Задание 1" << endl;
    double deg;
    cout << "Введите значение в градусах: ";
    cin >> deg;
    double rad = deg / 180;
    cout << "Значение в радианах: " << rad << "П" << endl;
    //Задание 2
    cout << "Задание 2" << endl;
    double rad1;
    cout << "Введите значение в радианах: ";
    cin >> rad1;
    double deg1 = rad1 * 180;
    cout << "Значение в градусах: " << deg1 << endl;
    //Задание 3
    cout << "Задание 3" << endl;
    double x, a, y;
    cout << "Введите количество конфет в килограммах X: ";
    cin >> x;
    cout << "Введите цену за это количество килограмм A: ";
    cin >> a;
    cout << "Введите количество конфет в килограммах Y: ";
    cin >> y;
    double k1 = a / x;
    double k2 = y * k1;
    cout << "Цена за 1 кг: " << k1 << endl;
    cout << "Стоимость Y кг: " << k2 << endl;
    //Задание 4
    cout << "Задание 4" << endl;
    double v1, v2, s, t;
    cout << "Введите скорость первого автомобиля: ";
    cin >> v1;
    cout << "Введите скорость второго автомобиля: ";
    cin >> v2;
    cout << "Введите расстояние между автомобилями: ";
    cin >> s;
    cout << "Введите время: ";
    cin >> t;
    double s2 = (v1 + v2) * t + s;
    cout << "Расстояние между автомобилями через T часов: " << s2 << endl;
    //Задание 5
    cout << "Задание 5" << endl;
    double A, B;
    cout << "Введите коэффициент A: ";
    cin >> A;
    cout << "Введите коэффициент B: ";
    cin >> B;
    double X = -B / A;
    cout << "Корень уравнения: " << X << endl;
    //Задание 6
    cout << "Задание 6" << endl;
    double a1, a2, b1, b2, c1, c2;
    cout << "Введите коэффициент A1: ";
    cin >> a1;
    cout << "Введите коэффициент B1: ";
    cin >> b1;
    cout << "Введите коэффициент C1: ";
    cin >> c1;
    cout << "Введите коэффициент A2: ";
    cin >> a2;
    cout << "Введите коэффициент B2: ";
    cin >> b2;
    cout << "Введите коэффициент C2: ";
    cin >> c2;
    double x1 = (c2 * b1 - c1 * b2) / (a2 * b1 - a1 * b2);
    double y1 = (c1 - a1 * x1) / b1;
    cout << "Корень системы X: " << x1 << endl;
    cout << "Корень системы Y: " << y1 << endl;
}