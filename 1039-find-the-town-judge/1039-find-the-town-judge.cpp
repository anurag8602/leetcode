class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int c=0;
        int a=0,b;
        if(n==1)return 1;
        unordered_map<int,int>mp;
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]]++;
        }
        for(auto i:mp)
        {
            if(i.second==n-1){
                a=i.first;
                break;
            }
        }
        if(a==0) return -1;
        for(auto nums:trust) 
        {
            if(nums[0] == a) return -1;
        }
        return a;
    }
};