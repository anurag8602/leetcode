class Solution {
public:
    bool canJump(vector<int>& nums) {
        int posi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>posi) return false;
            else posi=max(posi,nums[i]+i);
        }
        return true;
    }
};