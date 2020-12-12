
#include <iostream>
#include <cmath>;
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b, c,n;
    double d, x1, x2;

    cout << "Введите коэфициенты";
    cout << endl;
    cin >> a >> b >> c;

    d = b * b - (4 * a * c);
    if (d >= 0)
    {
        x1 = ((-b + sqrt(d)) / (2 * a));
        x2 = ((-b - sqrt(d)) / (2 * a));
        cout << "Корни уравнения: " << x1 << ", " << x2;
    }
    if (d < 0)
    {
        cout << "Корней нет";
    }
    return 0;
}
 