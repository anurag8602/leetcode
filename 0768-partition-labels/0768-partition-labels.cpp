class Solution {
public:
    vector<int> partitionLabels(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        vector<int>res;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
            mp[s[i]]=i;
        int i=0,j,c;
        while(i<s.length())
        {
            c=0;
            int m=mp[s[i]];
            for(j=i;j<=m;j++)
            {
                if(mp[s[j]]>m)
                    m=mp[s[j]];
                c++;
            }
            res.push_back(c);
            i=j;
        }
        return res;
    }
};