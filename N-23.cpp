#include <iostream>

using namespace std;

int main()
{
    int a[66]={0};
    a[1]=1;
    for (int i = 1; i <= 20; i++)
    {
        if (i > 1)
        {
            a[i] += a[i - 1];
        }
        if (i % 3 == 0)
        {
            a[i] += a[i / 3];
        }
    }
    for (int i = 20; i <= 65; i++)
    {
        if (i > 21)
        {
            a[i] += a[i - 1];
        }
        if (i % 3 == 0 && i / 3 >= 20)
        {
            a[i] += a[i / 3];
        }
    }
    
    cout << a[65];
}
