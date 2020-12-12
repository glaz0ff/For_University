
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n, a, max;
    max = 0;
    cout << "Введите кол-во элементов последовательности: ";
    cout << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a >= max)
        {
            max = a;
        }
    }
    cout << "max: ";
    cout << max;
    return 0;
}
