class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ret;
        int c=0;
        unordered_map<int,int>mp;
        for(int i=0;i<A.size();i++)
        {
            if(mp[A[i]]==0)
                mp[A[i]]++;
            else{
                mp[A[i]]--;
                c++;
            }
            if(mp[B[i]]==0)
                mp[B[i]]++;
            else{
                mp[B[i]]--;
                c++;
            }
            ret.push_back(c);

        }
        return ret;
    }
};