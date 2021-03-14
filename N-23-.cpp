#include <iostream>

using namespace std;

int main()
{
    //команды +1, +2, *3
    int a[23] = {0};
    
    a[3] = 1;
    
    for (int i = 3; i <= 10; i++){
        if (i > 1){
            a[i] += a[i - 1];
        }
        if (i > 2){
            a[i] += a[i - 2];
        }
        if (i % 3 == 0){
            a[i] += a[i / 3];
        }
        if (i == 8){
            a[i] = 0;
        }
    }
    
    for (int i = 10; i <= 22; i++){
        if (i >= 11){
            a[i] += a[i - 1];
        }
        if (i >= 12){
            a[i] += a[i - 2];
        }
        if (i % 3 == 0 && i / 3 >=10){
            a[i] += a[i / 3];
        }
        if (i == 15){
            a[i] = 0;
        }
    }
    
    cout << a[22];
}
