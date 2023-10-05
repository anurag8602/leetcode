class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ret;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto no:nums){
            mp[no]++;
        }
        for(auto i:mp)
        {
            if(i.second>n/3)
                ret.push_back(i.first);
        }
        return ret;
    }
};