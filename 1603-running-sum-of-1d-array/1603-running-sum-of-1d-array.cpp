class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int s=0;
        vector<int>ret;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            ret.push_back(s);
        }
        return ret;
    }
};