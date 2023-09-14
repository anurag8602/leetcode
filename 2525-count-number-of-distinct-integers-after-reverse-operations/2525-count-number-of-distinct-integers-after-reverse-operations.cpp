class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]/10==0)
                nums.push_back(nums[i]);
            else{
                int t=nums[i];
                int s=0;
                while(t)
                {
                    int n=t%10;
                    t=t/10;
                    s=s*10+n;
                }
                nums.push_back(s);
            }
        }
        // for(int i=0;i<nums.size();i++)
        //     cout<<
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        return mp.size();
    }
};