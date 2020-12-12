
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    float sum, x, f;
    int n, i;

    sum = 1;
    f = 1;
    cout << "Введите длину последовательности: ";
    cin >> n;
    cout << endl;
    cout << "Введите значение переменной X: ";
    cin >> x;

    if (n == 1)
    {
        cout << sum;
    }
    if (n == 0)
    {
        cout << 0;
        goto skip;
    }
    if ((n != 0) && (n != 1))
    {
        for (int i = 2; i <= n; i++)
        {
            sum = sum + pow(x, i - 1) / f;
            f = f * i;
        }
    }
    cout << "Сумма последовательности равна: ";
    cout << sum;
    skip:
    return 0;
}