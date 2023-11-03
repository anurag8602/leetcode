class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ret;
        int j=1;
        int i=0;
        while(i<target.size() && j<=n)
        {
            if(target[i]==j)
            {
                ret.push_back("Push");
                i++;
                j++;
            }
            else{
                ret.push_back("Push");
                ret.push_back("Pop");
                j++;
            }
        }
        return ret;
    }
};