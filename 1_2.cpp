#include <iostream>
using namespace std;

int main()
{
    float f, g;
    cin >> f;
    cin >> g;

    if (f == 0) {
        if (g == 0) {
            cout << "error";
        }
        cout << 0;
    }
    if (f != 0) {
        if (g == 0) {
            cout << "error";
        }
        cout << f / g;
    }
    return(0);
}

