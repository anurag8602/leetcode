class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int ans=INT_MAX,s=0;
        int i=0,j=0;
        while(j<nums.size())
        {
            s+=nums[j];
            while(s>=t)
            {
                s-=nums[i];
                ans=min(ans,j-i+1);
                i++;
            }
            
            j++;
        }
        return (ans==INT_MAX)?0:ans;
    }
};