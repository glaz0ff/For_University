
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int n, buf;
    buf = 0;

    cout << "Введите число N: ";
    cin >> n;

    while ((n % 10) > 0)
    {
        buf = buf + (n % 10);
        buf = buf * 10;
        n = n / 10;
    }
    cout << "Число N в обратно поярдке: ";
    cout << buf / 10;

    return 0;
}