class Solution {
public:
    int passThePillow(int n, int time) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if(time<n) return time+1;
        int x=time/(n-1);
        if(x%2==0)
            return 1+time%(n-1);
        return n-time%(n-1);
    }
};