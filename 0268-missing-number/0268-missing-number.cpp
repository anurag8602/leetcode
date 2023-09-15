class Solution {
public:
    int missingNumber(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n=nums.size();
        int sum=0;
        int c=0;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            c+=nums[i];
            sum+=i;
        }
        sum+=i;
        return sum-c;
    }
};