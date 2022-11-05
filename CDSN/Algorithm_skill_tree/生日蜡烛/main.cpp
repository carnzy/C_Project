#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{

    int age = 0;
    int sum = 0;
    for (int i = 0; i < 100; sum = 0, i++)
        for (int j = i; j < 100; j++)
        {
            sum += j;
            if (sum == 236)
                cout << i << "  " << j;
            else if (sum > 236)
                break;
        }
    return 0;
}