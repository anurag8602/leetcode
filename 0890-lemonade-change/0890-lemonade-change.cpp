class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int f=0,t=0;
        for(auto i:bills){
            if(i ==5) f++;
           else if(i ==10){
                if(f>0){
                    f--;t++;
                }
               else return 0;
            }
            else {
                if(f>0 && t>0){
                    f--;
                    t--;
                    }
                   else if(f>=3){
                       f-=3;
                    }
                   else return 0;
                }
        }
        return 1;    
    }
};