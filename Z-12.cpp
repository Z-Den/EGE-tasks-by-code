#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1(25, '1'), s2(17, '2'), s3(10, '3');
    string s = '>' + s1 + s2 + s3;
    int sum = 0;

    while (s.find(">1") != string::npos || s.find(">2") != string::npos || s.find(">3") != string::npos)
    {
        if (s.find(">1") != string::npos)
        {
            s.replace(s.find(">1"), 2, "22>3");
        }
        if (s.find(">2") != string::npos)
        {
            s.replace(s.find(">2"), 2, "2>");
        }
        if (s.find(">3") != string::npos)
        {
            s.replace(s.find(">3"), 2, "11>2");
        }
    }
    
	cout << s;

    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }

    cout << sum;

    return 0;
}