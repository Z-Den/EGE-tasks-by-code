#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector <int> memory(34,INT_MAX);

int f(int n){
    if (n < 0){
        return -n;
    }
    if (n % 2 == 0){
        memory[n] = 2 * n + 1 + f (n - 3);
        return memory[n];
    }
    if (n % 2 != 0){
        memory[n] = 4 * n + 2 * f(n - 4);
        return memory[n];
    }
}

int main(){
    cout << f(33);
}