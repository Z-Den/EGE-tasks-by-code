#include <vector>
#include <iostream>
#include <climits>

using namespace std;

vector <int> mem(51,1000000);

int f(int n){
    if (n >= 0 && n <= 50 && mem[n] != 1000000){
        return mem[n];
    }
    if (n == 0){
        mem[0] = 1;
        return 1;
    }
    if (n > 0){
        mem[n] = 2 * f(1 - n) + 3 * f(n - 1) + 2;
        return mem[n];
    }
    if (n < 0){
        return -f(-n);
    }
}

int main()
{
    f(50);
    cout << mem[50];

    return 0;
}
