class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1) return;
        k=k%nums.size();
        int i=0;
        int j=nums.size()-1;
        i=j-k+1;
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        i=0;
        j=nums.size()-k-1;
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        reverse(nums.begin(),nums.end());
    }
};