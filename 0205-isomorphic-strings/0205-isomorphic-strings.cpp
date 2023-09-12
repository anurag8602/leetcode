class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
            return false;
        unordered_map<char,string> mp1,mp2;
        for(int i=0;i<s.length();i++)
        {
            char c = 48+i;
            mp1[s[i]].push_back(c);
            mp2[t[i]].push_back(c);
        }
        for(int i=0;i<t.length();i++)
        {
            if(mp1[s[i]]!=mp2[t[i]])
                return false;
        }
        return true;
    }
};