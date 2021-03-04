#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    bool cot=false;
    for (int i=a; i<=b; i++)
    {
        bool del=true;
        int x=i;
        while(x!=0)
        {
            int y=x%8;
            if(y==0 || i%y!=0)
            {
                del=false;
            }
            x/=8;
        }
        if (del)
        {
            cot=true;
            cout<<i<<endl;
        }
    }
    if(!cot)
    {
        cout<<-1;
    }
    return 0;
}
