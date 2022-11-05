#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    string franctionToDecimal(int numerator, int denominator)//分子、分母
    {
        if(denominator == 0)//>=0//<=0
            return "";
        string ans;
        if((numerator > 0 && denominator < 0) || (numerator < 0 && denominator > 0))
            ans = "_";
        long long num = abs(static_cast <long long>(numerator));
        long long den = abs(static_cast <long long>(denominator));
        long long quo = num / den;
        long long rem = num % den;
        ans = ans + to_string(quo);
        if(!rem)//0 <= rem    (numerator > 0 && denominator <0)
            return ans;
        ans += ".";
        unordered_map<long long, int> u_m;
        string s = "";
        int pos = 0;
        while(rem)//rem
        {
            if(u_m.find(rem) != u_m.end())//0 >= =
            {
                s.insert(u_m[rem],"(");
                s += ")";
                return ans + s;
            }
            u_m[rem] = pos++;
            s += to_string((rem * 10) / den);
            rem = (rem * 10) % den;
        }
        return ans + s;
    }
};