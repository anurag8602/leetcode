class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adp) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int>ret;
        unordered_map<int,vector<int>>mp;
        for(auto i:adp)
        {
            int a=i[0];
            int b=i[1];
            mp[a].push_back(b);
            mp[b].push_back(a);           
        }
        for(auto i:mp)
        {
            if(i.second.size()==1) 
            {
            ret.push_back(i.first);
            ret.push_back(i.second[0]);
            break;
            }    
        }
        int c=2;
        while(ret.size()!=mp.size())
        {
            if(mp[ret[c-1]][0]==ret[c-2])
            { 
                ret.push_back(mp[ret[c-1]][1]);
                c++;
            }
            else {
                ret.push_back(mp[ret[c-1]][0]);
                c++;
            }
        }  
        return ret; 
    }
};