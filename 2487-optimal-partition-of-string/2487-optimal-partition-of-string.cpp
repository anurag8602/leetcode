class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>mp;
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]]==0)
                mp[s[i]]++;
            else{
                mp.clear();
                mp[s[i]]++;
                c++;
            }
        }
        if(mp.size()!=0)
            c++;
        return c;
    }
};