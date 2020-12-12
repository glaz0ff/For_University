
#include <iostream>
#include <string> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int sum, n;
    sum = 0;
    cout << "Введите число: ";
    cout << endl;
    cin >> n;
    cout << endl;
    while ((n % 10) > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    cout << "Сумма цифр числа: " << sum;

    return 0;
}
