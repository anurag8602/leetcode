class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int i=0,j=0,ans=0,t=0;
        unordered_map<int ,int> mp;
        while(j<fruits.size())
        {
            mp[fruits[j]]++;
            while(mp.size()>2)
            {
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0)
                    mp.erase(fruits[i]);
                i++;
            }
        ans=max(ans,j-i+1);
        j++;
        }
        return ans;
    }
};