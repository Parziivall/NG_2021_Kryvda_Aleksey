#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    system("chcp 1251 & cls");
    double a, b, c, d, x1, x2;

    cout << "¬ведите a: ";
    cin >> a;
    cout << "¬ведите b: ";
    cin >> b;
    cout << "¬ведите c: ";
    cin >> c;

    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    if (d == 0)
    {
      x1 = -(b / (2 * a));
      cout << "x1 = x2 = " << x1 << "\n";
    }
    if (d < 0){
        cout << "D < 0, корней нету";
    }
}

