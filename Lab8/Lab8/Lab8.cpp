#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    //Задание 1
    cout << "Задание 1" << endl;
    double bytes;
    cout << "Введите размер файла в байтах: ";
    cin >> bytes;
    int kilobytes = bytes / 1024;
    cout << "Размер файла в килобайтах: " << kilobytes << endl;
    //Задание 2
    cout << "Задание 2" << endl;
    int a, b;
    cout << "Введите число A (A > B): ";
    cin >> a;
    cout << "Введите число B (B < A): ";
    cin >> b;
    int res = a / b;
    cout << "Количество отрезков B, размещенных на отрезке A: " << res << endl;
    //Задание 3
    cout << "Задание 3" << endl;
    int a1, b1;
    cout << "Введите число A (A > B): ";
    cin >> a1;
    cout << "Введите число B (B < A): ";
    cin >> b1;
    int res1 = a1 - ((a1 / b1) * b1);
    cout << "Длина незанятой части отрезка A: " << res1 << endl;
    //Задание 4
    cout << "Задание 4" << endl;
    int n;
    cout << "Введите двузначное число: ";
    cin >> n;
    int n1 = n / 10;
    int n2 = n % 10;
    cout << "Результат: " << n2 << n1 << endl;
    //Задание 5
    cout << "Задание 5" << endl;
    int num;
    cout << "Введите трехзначное число: ";
    cin >> num;
    int num1 = num / 100;
    int num2 = num % 100;
    cout << "Результат: " << num2 << num1 << endl;
}