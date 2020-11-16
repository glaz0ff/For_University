

#include <iostream>

using namespace std;

int main()
{
	int s, i, j, n, b;
	s = 0;
	cin >> n;

	for (i = 0; i <= n; i++) {
		b = 1;
		for (j = i; j <= i*2; j++) {
			b *= j;
		}
		s += b;
	 }
	cout << s;
	return(0);
}

