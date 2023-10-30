class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        for(auto i:mp)
        {
            if(i.second.size()>1){
                vector<int>vv=i.second;
                for(int j=0;j<vv.size()-1;j++) 
                {
                    if((vv[j+1]-vv[j])<=k) return true;
                }
            }
        }
        return false;
    }
};