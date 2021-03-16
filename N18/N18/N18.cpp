#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    fstream file("18-77.txt");

    double a[1000];
    int i = 0;

    while (file && i < 1000) {
        file >> a[i];
        i++;
    }

    double s = a[0], max = 0;

    for (int j = 1; j < 999; j++) {
        if (abs(a[j] - a[j + 1]) <= 16) {
            s += a[j];
        }
        if (s > max) {
            max = s;
        }
    }

    cout << max;
}