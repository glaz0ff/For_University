
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int n, i, j;
    cin >> n;
    int s = sqrt(n);

    if (n != s*s) 
    {
        cout << "Неверный ввод";
    }
    else {
        for (int i = 0; i < s; i++) 
        {
            for (int j = 0; j < s; j++)
            {
                cout << "*";
            }
            if (i != s - 1) cout << endl;
        }
    }
    return 0;
}
