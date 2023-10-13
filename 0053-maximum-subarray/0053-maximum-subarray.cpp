class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int i=0,j=0;
        int ans=0,s=0;
        int maxi=INT_MIN;
        for(;j<nums.size();++j)
        {
            s+=nums[j];
            maxi=max(maxi,s);
            if(s<0) s=0;
        }
        return maxi;
    }
};