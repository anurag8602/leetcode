class Solution {
public:
    int isvalid(vector<int>nums,int mid)
    {
        int c=1;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            if(s+nums[i]<=mid)
            {
                s+=nums[i];
            }
            else{
                c++;
                s=nums[i];
            }
        }
        return c;
    }
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        int l=*max_element(nums.begin(),nums.end());
        int h=accumulate(nums.begin(),nums.end(),0);
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(isvalid(nums,mid)>k)
            {
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return l;
    }
};