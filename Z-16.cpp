#include <iostream>

using namespace std;

int F(int n) {
    if (n > 2){
        return F(n-1) + F(n-2) + F(n-3);
    }
    else{
        return n;
    }
}

int main()
{
    cout<<F(6);
    
    return 0;
}
