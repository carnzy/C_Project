#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcdefghijklmnopqrs";
    string str;

    for (int i = 0; i < 106; i++)
    {
        str += s;
    }

    while (str.length() > 1)
    {
        for (int i = 0; i < str.length(); i++)
        {
            str.erase(i, 1);
        }
    }
    cout << str;
    return 0;
}