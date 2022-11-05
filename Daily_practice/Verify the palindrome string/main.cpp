#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool static isPalindrome(string s)
    {
        int left = 0, right;
        if((right = s.size()) == 0)
        {
            return true;
        }
        while(left < right)
        {
            while(left < right && !isalnum(s[left]))//是字母或数字
            {
                left++;
            }
            while(left < right && !isalnum(s[right]))
            {
                right--;
            }
            if(left < right)
            {
                if(tolower(s[left]) != tolower(s[right]))
                {
                    return false;
                }
            }
            left++;
            right--;
        }
        return true;
    }
};

int main(){
    char s[100];
    cout<< "请输入一个字符串" << endl;
    scanf("%s", &s);
    if(Solution::isPalindrome(s) == 1){
        cout << "true" <<endl;
    }else{
        cout << "false" << endl;
    }
    return 0;
}