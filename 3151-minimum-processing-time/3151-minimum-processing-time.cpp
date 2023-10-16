class Solution {
public:
    int minProcessingTime(vector<int>& pt, vector<int>& tasks) {
        sort(pt.begin(),pt.end());
        sort(tasks.begin(),tasks.end());
        int ans=0;
        for(int j=tasks.size()-1,i=0;j>=0,i<pt.size();j=j-4,i++)
        {
            
                    int a=tasks[j]+pt[i];
                    int b=tasks[j-1]+pt[i];
                    int c=tasks[j-2]+pt[i];
                    int d=tasks[j-3]+pt[i];
                    ans=max(ans,max(a,max(b,max(c,d))));
            
        }
        return ans;
    }
};