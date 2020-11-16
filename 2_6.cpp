

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
        for (int i = n; i >= 1; i--)
        {
            for (int j = 0; j < n - i; j++) 
            {
                cout << " ";
            }
            for (int j = 0; j < i; j++) 
            {
                cout << "*";
            }
            if (i != 1) cout << endl;
        }
    }
    return 0;
}
