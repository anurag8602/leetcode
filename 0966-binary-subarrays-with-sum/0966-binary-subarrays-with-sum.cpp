int speedUp = []{std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
class Solution {
public:
    int help(vector<int>& nums, int g)
    {
        if(g<0) return 0;
        int s=0,ans=0;
        int i=0,j=0;
        while(j<nums.size())
        {
            s+=nums[j];
            while(s>g) s-=nums[i++];
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int g) {
        speedUp;
        return help(nums,g)-help(nums,g-1);
    }
};