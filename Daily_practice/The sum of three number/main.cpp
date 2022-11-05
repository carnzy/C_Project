#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
class Solution
{
    public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> r;
        if(nums.size() == 0)
            return r;
        sort(nums.begin(), nums.end());
        int cur, left, right;
        cur = 0;
        while (cur < nums.size())
        {
            int n = nums[cur] + nums[left] + nums[right];
            if(n == 0)
            {
                r.emplace_back(vector<int>({nums[cur], nums[left], nums[right]}));
                int t = left + 1;
                //填空
            }
            else if(n > 0)
            {
                int t = right - 1;
                while (t > left && nums[t] == nums[right])
                    t--;
                right = t;
            }
            else{
                int t = left + 1;
                while (t < right && nums[t] == nums[left])
                    t++;
                left = t;
            }
            int t = cur + 1;
        while (t < nums.size() && nums[t] == nums[cur])
            t++;
        cur = t;
        }
        return r;
    }
    
};