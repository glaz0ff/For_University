

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cin >> n;

    if (n <= 2)
        cout << "Неправильный ввод";
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < i; j++) 
            {
                cout << "*";
            }
            if (i != n) cout << endl;
        }
    }
    return 0;
}

