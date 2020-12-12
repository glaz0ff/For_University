
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int n, a;
    bool flag;

    cout << "Введите кол-во элементов";
    cout << endl;
    cin >> n;
    cout << "Введите элементы последовательности: ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            flag = false;
        }
        if (a > 0)
        {
            cout << "Последовательность положительная";
            flag = true;
            break;
        }
        if (a < 0)
        {
            cout << "Последовательность отрицательная";
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "Последовательность нулевая";
    }
    return 0;
}