
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int n;
    cin >> n;
    if (n < 1) 
    {
        cout << "Неправильный ввод";
    }
    else 
    {

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cout << "* ";
            }
            if (i != n - 1)
               cout << endl;
        }
    }
    return 0;
}
