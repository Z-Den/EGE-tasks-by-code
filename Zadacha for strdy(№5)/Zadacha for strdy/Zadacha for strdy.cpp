#include <iostream>

using namespace std;

int main() {
	int r, c = 0;
	cin >> r;
	for (int i = 100; i < 1000; i++) {
		int x = i;
		int min = 10, av = 0, max = 0;
		while (x != 0) {
			min = x % 10;
			if (av < min) {
				swap(min,av);
			}
			if (max < av) {
				swap(av, max);
			}
			x /= 10;
		}
		//cout << i << ' ' << min << ' ' << av << ' ' << max << endl;
		int mn = min * 10 + av, mx = max * 10 + av;
		//cout << mx << ' ' << mn << endl;
		if (mx - mn == r) {
			cout << i << endl;
			c++;
		}
	}

	cout << c;
}