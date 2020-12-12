#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cin >> n;

    if (n <= 2)
        cout << "Неверный ввод";
    else
    {
        for (int i = n; i >= 0; i--)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i + j < n)
                {
                    cout << "* ";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
