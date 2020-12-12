
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int n;
    int sum = 0;

    cout << "Введите число элементов последовательности: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 3) == 0)
        {
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }
    }
    cout << "Сумма последовательности равна: ";
    cout << sum;

    return 0;
}
