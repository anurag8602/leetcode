class Solution {
public:
    int helper(vector<int >&val,vector<int >&coins,int a)
    {
        if(a==0)
        {
            return 0;
        }
        if(a<0)
        {
            return INT_MAX;
        }
        if(val[a]!=-1)
        {
            return val[a];
        }
        int mini=INT_MAX;
        
            for(int j=0;j<coins.size();j++)
            {

                    int ans=helper(val,coins,a-coins[j]);
                    if(ans!=INT_MAX)
                    {
                        ans=1+ans;
                    }
                    mini=min(mini,ans);
                    val[a]=mini; 
            }
        
        return val[a];
    }
    // int tab(vector<int >&coins,int a)
    // {
    //     vector<int > val(a+1,INT_MAX);
    //     val[0]=0;
    //     for(int i=1;i<=a;i++)
    //     {
    //         for(int j=0;j<coins.size();j++)
    //         {
    //             if(i-coins[j]>=0 && val[i-coins[j]]!=INT_MAX)
    //             {

    //                 val[i]=min(val[i],1+val[i-coins[j]]);
    //             }
    //         }
    //     }
    //     if(val[a]==INT_MAX)
    //     {
    //         return -1;
    //     }
    //     return val[a];
    // }
    int coinChange(vector<int>& coins, int amount) {
        vector<int > val(amount+1,-1);
        int a=helper(val,coins,amount);
        //int a=tab(coins,amount);
        if(a==INT_MAX)
        {
            return -1;
        }
        return a;
    }
};