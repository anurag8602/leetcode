class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp1,mp2;
        for(auto i:t)
            mp1[i]++;
        if(t.length()>s.length())  
             return "";
        int i=0,j=0,c=0,idx=-1,mini=INT_MAX;
        while(j<s.length())
        {
            mp2[s[j]]++;
            if(mp2[s[j]]<=mp1[s[j]])
            {
                c++;
            }
            if(c==t.length())
            {
                while(mp2[s[i]]>mp1[s[i]])
                {
                    mp2[s[i]]--;
                    i++;
                }
                if(mini>j-i+1)
                {
                    mini=min(mini,j-i+1);
                    idx=i;
                }
            }
            j++;
        }
        return (idx==-1)?"":s.substr(idx,mini);
    }
};