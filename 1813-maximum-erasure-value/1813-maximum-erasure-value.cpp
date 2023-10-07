class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,j=0;
        long long int ans=0,s=0;
        unordered_map<int,int>mp;
        while(j<nums.size())
        {
            s+=nums[j];
            mp[nums[j]]++;
            while(mp[nums[j]]>1)
            {
                s-=nums[i];
                mp[nums[i]]--;
                i++;
            }
            j++;
            ans=max(ans,s);
        }
        int r=ans;
        return r;
    }
};