

#include <iostream>

using namespace std;

int main()
{
	int n, i;
	cin >> n;
	setlocale(LC_ALL, "ru");

	if ((n <= 3) or (n % 2 == 0))
		cout << "Неправильный ввод";
	else
	{
		int x = 1;
		int y = n / 2;
		for (int i = 0; i <= (n / 2); i++) {
			for (int i = 0; i < y; i++) {
				cout << " ";
			}
			for (int i = 0; i < x; i++) {
				cout << "*";
			}
			if (i != n / 2) cout << endl;
			x += 2;
			y += -1;
		}
	}
	return 0;
}

