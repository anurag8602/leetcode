class Solution {
public:
    int minSteps(string s, string t) {
        int k=0;
        vector<int> mp1(26),mp2(26);
        for(int i=0;i<s.length();i++)
        {
            mp1[s[i]-'a']++;
            mp2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(mp1[i]>mp2[i])
            {
                k=k+(mp1[i]-mp2[i]);
            }
        }
        return k;
        
    }
};