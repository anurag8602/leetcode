class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,j=0;
        int ans=0,s=0;
        int max=INT_MIN;
        while(j<nums.size())
        {
            s+=nums[j];
            if(max<s) max=s;
            if(s<0) s=0;
            j++;
        }
        return max;
    }
};