#define fast ({ios_base::sync_with_stdio(0);\
         cin.tie(0); \
         cout.tie(0);})
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        fast;
        int j=0,s=0,maxi=INT_MIN;
        for(;j<nums.size();++j)
        {
            s+=nums[j];
            maxi=max(maxi,s);
            s=max(s,0);
        }
        return maxi;
    }
};