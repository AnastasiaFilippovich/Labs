#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    //Задание 1
    cout << "Задание 1" << endl;
    int n;
    cout << "Введите количество секунд: ";
    cin >> n;
    int res = n - ((n / 60) * 60);
    cout << "Количество секунд, прошедших с начала последней минуты: " << res << endl;
    //Задание 2
    cout << "Задание 2" << endl;
    int k;
    cout << "Введите номер дня года: ";
    cin >> k;
    int res2 = k % 7;
    cout << "Номер дня недели: " << res2 << endl;
    //Задание 3
    cout << "Задание 3" << endl;
    int k1, n1;
    cout << "Введите номер дня года: ";
    cin >> k1;
    cout << "Введите номер дня недели для 1 января: ";
    cin >> n1;
    int res3 = (k1 + (n1 - 1)) % 7;
    if (res3 == 0) {
        res3 = 7;
    }
    cout << "Номер дня недели: " << res3 << endl;
    //Задание 4
    cout << "Задание 4" << endl;
    int a, b, c;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;
    int r1 = (a / c) * (b / c);
    int r2 = (a * b) - (c * c * r1);
    cout << "Количество квадратов: " << r1 << endl;
    cout << "Незанятая площадь: " << r2 << endl;
    //Задание 5
    cout << "Задание 5" << endl;
    int year, res4;
    cout << "Введите номер года: ";
    cin >> year;
    if (year % 100 > 0) {
        res4 = year / 100 + 1;
    }
    else {
        res4 = year / 100;
    }
    cout << "Номер столетия: " << res4 << endl;
}