class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0,j=0;
        int ans=0,temp=0;
        while(j<nums.size())
        {
            if(nums[j]%2)
            {
                k--;
                temp=0;
            }
            while(k==0)
            {
                if(nums[i]%2)
                {
                    k++;
                }
                temp++;
                i++;
            }
            ans+=temp;
            j++;
        }
        return ans;
    }
};