#include <iostream>


using namespace std;

int main()
{
    string s;
    string s1="B",s2="A",s3="BA";
    for(int i=0;i<=51;i++)
    {
        s+="AB";
    }
  
    while (s.find("AA")!=string::npos || s.find("BB")!=string::npos || s.find("AB")!=string::npos){
        if (s.find("AA")!=string::npos){
            s.replace(s.find("AA"),2,s1);
        }
        if (s.find("BB")!=string::npos){
            s.replace(s.find("BB"),2,s2);
        }
        if (s.find("AB")!=string::npos){
            s.replace(s.find("AB"),2,s3);
        }
    }

    cout<<s;

    return 0;
}	