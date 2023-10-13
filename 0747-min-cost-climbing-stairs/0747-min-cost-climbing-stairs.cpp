class Solution {
public:
    int helper(vector<int>&cost,vector<int>&val,int idx)
    {
        if(idx>=cost.size())
        {
            return 0;
        }
        if(val[idx]!=0)
        {
            return val[idx];
        }
        return val[idx]=cost[idx]+min(helper(cost,val,idx+1),helper(cost,val,idx+2));
         
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> val(cost.size());
        int a=min(helper(cost,val,0),helper(cost,val,1));
        return a;
    }
};