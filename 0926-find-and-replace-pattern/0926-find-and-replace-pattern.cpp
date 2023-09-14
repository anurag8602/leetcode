class Solution {
public:
    bool isokay(string a,string b)
    {
        int s=a.size();
        int v1[26]={0};
        int v2[26]={0};
        for(int i=0;i<s;i++)
        {
            if(v1[abs(97-a[i])]!=v2[abs(97-b[i])])
                return 0;
            v1[abs(97-a[i])]=i+1;
            v2[abs(97-b[i])]=i+1;
        }
        return 1;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n=words.size();
        vector<string> ret;
        for(int i=0;i<n;i++)
        {
            if(isokay(words[i],pattern))
                ret.push_back(words[i]);
        }
        return ret;
    }
};