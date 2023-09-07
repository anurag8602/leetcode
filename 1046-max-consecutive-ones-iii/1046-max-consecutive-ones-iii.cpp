class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int t=k,ret=0;;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int temp=0;
        //     while((t>0 && nums[i]!=0) || (nums[i]==1))
        //     {
        //         if(nums[i]==0)
        //         {
        //             t--;
        //             temp++;
        //         }
        //         else if(nums[i]==1)
        //         {
        //             temp++;
        //         }
        //         else{
        //             ret=max(ret,temp);
        //         }
        //     }
        //     t=k;
        // }
        // return ret;
        int ones=0,zeroes=0,i=0,j=0,ret=0;
        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                ones++;
            }
            else{
                zeroes++;
            }
            while(zeroes>k)
            {
                if(nums[j]==1)
                {
                    ones--;
                }
                else{
                    zeroes--;
                }
                j++;
            }
            ret=max(ret,ones+zeroes);
            i++;
        }
        return ret;
    }
};