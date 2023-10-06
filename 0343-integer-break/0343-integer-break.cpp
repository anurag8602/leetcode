class Solution {
public:
    int integerBreak(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if(n<=3)
        {
            return n-1;
        }
        int res=1;
        while(n>4)
        {
            res*=3;
            n-=3;
        }
        res*=n;
        return res;
    }
};