#include <iostream>

using namespace std;

int main()
{
    int f[43] = { 0 };
    f [3] = 1;

    for (int i = 3; i <= 42; i++)
    {
        if (i > 3)
        {
            f[i] += f[i - 3];
        }
        
        if (i % 2 == 0)
        {
            f[i] += f[i / 2];
        }
    }
    
    cout << f[42];
    
    return 0;
}