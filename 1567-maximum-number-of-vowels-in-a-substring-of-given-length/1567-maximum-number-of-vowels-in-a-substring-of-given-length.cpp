class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=k,maxi=0,ret=0;
        for(i=0;i<k;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                maxi++;
            }
            ret=max(ret,maxi);
        }
        i=0;
        while(j<s.size())
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                maxi++;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                maxi--;
            }
            j++;
            i++;
            ret=max(ret,maxi);
            if(ret==k)
            {
                return k;
            }
        }
        return ret;
    }
};