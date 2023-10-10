class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>mp;
        for(auto a:grid)    mp[a]++;
        int ret=0;
        for(int i=0;i<grid.size();i++)
        {
            vector<int>abc;
            for(int j=0;j<grid.size();j++) abc.push_back(grid[j][i]);
            ret+=mp[abc];
        }
        return ret;
    }
};