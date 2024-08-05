class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
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