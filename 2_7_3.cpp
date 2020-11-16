
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 1) 
    {
        cout << "error";
    }
    else {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0 || j == n - 1 || i == 0 || i == n - 1)
                    cout << "* ";
                else 
                    cout << "  ";
            }
            if (i != n - 1)

                cout << endl;
        }
    }
    return 0;
}
