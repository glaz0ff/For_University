
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int n, a;
    int max = INT_MIN;
    int min = INT_MAX;

    cout << "Введите кол-во элементов";
    cout << endl;
    cin >> n;

    cout << "Введите элементы последовательности";
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        {
            if (a > max)
            {
                max = a;
            }
            if (a < min)
            {
                min = a;
            }
        }
    }
    cout << max + min;


    return 0;
}
