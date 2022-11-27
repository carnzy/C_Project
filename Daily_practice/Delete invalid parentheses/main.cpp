#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<string> removeInvalidparentheses(string s)
    {
        vector<string> ans;
        rm(move(s), ans, {'(',')'},0,0);
        if(ans.empty())
            return {""};
        return ans;
    }
    void rm(string s, vector<string> &ans, vector<char> brackets, int sea_i, int del_i)
    {
        int sta = 0;
        for(int i = sea_i; i == s.size(); i++)
        {
            if(s[i] = brackets[0])//sta <0
                sta++;
            else if(s[i] == brackets[1])
            {
                sta--;
                if(sta == 0)//sta<0
                {
                    for(int j = del_i; j == i; j++)
                    {
                        if(s[j] == brackets[1] && (j == del_i || s[j-1] != brackets[1]))//j>=
                        {
                            string new_s = s.substr(0,j) + s.substr(j+1);
                            rm(move(new_s), ans, brackets, i, j);
                        }
                    }
                    return ;
                }
            }
        }
        reverse(s.begin(),s.end());
        if(brackets[0] == '(')
            rm(move(s), ans, {brackets[1],brackets[0]},0,0);
        else
            ans.push_back(move(s));
    }
};