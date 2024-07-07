class Solution {
public:
    int numWaterBottles(int nb, int ne) {
        int ans=nb;
        while(nb>=ne)
        {

            ans+=(nb/ne);
            nb=(nb/ne)+(nb%ne);
        }
        return ans;
    }
};