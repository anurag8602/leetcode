class Solution {
public:
    int minimumLength(string s) {
        int ans=s.length();
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]].push_back(i);
        }
        for(auto i:mp)
        {
            int m=i.second.size();
            int rem=0;
            while(m>=3)
            {
                rem+=2;
                m-=2;
            }
            ans-=rem;
        }
        return ans;
    }
};