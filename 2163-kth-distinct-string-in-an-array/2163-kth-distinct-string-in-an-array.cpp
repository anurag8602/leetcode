class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        unordered_map<string,int>mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        for(auto i:arr)
        {
            if(mp[i]==1)
                k--;
            if(k==0) return i;
        }
        return "";

    }
};