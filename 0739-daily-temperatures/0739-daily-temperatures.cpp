class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n,0);
        stack <int> s;
        for(int i=0;i<n;++i){
           while(!s.empty() && temp[i]>temp[s.top()]){
               int Index = s.top();
               s.pop();
               ans[Index] = i - Index;
           }
           s.push(i);
        }
    return ans;
    }
};