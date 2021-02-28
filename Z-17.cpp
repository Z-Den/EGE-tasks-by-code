#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int c = 0, min = 0;
    for (int i = 5903; i <= 174203; i++)
    {
        int cf = 0, x = i;
        bool dif = true;
        char digitCounts[10] = {0};
        while (x != 0)
        {
            int d = x % 10;
            if (d > 4)
            {
                cf++;
            }
            if (digitCounts[d] != 0){
                dif = false;
            }
            digitCounts[d]++;
            x /= 10;
        }
        if (dif && cf == 3)
        {
            c++;
            if ((abs(i - 30000)) < (abs(30000 - min)))
            {
                min = i;
            }
        }
    }
    
    cout << c << ' ' << min;
    
    return 0;
}
