class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        unordered_map<string,int>mp;
        vector<string>dis;
        for(auto i:arr)
        {
            mp[i]++;
        }
        for(auto i:arr)
        {
            if(mp[i]==1)
                dis.push_back(i);
        }
        if(dis.size()<k)
            return "";
        return dis[k-1];
    }
};