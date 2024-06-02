class Solution {
public:
    int minimumChairs(string s) {
        int e=0;
        int ans=0;
        for(auto i:s)
        {
            if(i=='E') e++;
            else e--;
            ans=max(e,ans);
        }
        return ans;
    }
};