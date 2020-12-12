
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int n, sum;
    sum = 0;

    cout << "Введите кол-во чисел в последовательности: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) == 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
    }
    cout << "Сумма последовательности равна: ";
    cout << sum;

    return 0;
}