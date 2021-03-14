#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream file("chisla.txt");

	double a[500], max = 0;
	int i = 0;

	while (file && i < 500) {
		file >> a[i];
		i++;
	}
	double s = a[0];
	for (int j = 1; j < 500; j++) {
		if (a[j - 1] < a[j]) {
			s += a[j];
		}
		else{
			if (s > max) {
				max = s;
			}
			s = a[j];
		}
	}

	cout << max;
	
	return 0;
}