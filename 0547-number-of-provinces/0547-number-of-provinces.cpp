class Solution {
public:
    void dfs(int vis[],int i,vector<int>adj[])
    {
        vis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
                dfs(vis,it,adj);
        }
    }
    int findCircleNum(vector<vector<int>>& isc) {
        int n=isc.size();
        int ans=0;
        int vis[n];
        for(int i=0;i<n;i++)    vis[i]=0;
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && isc[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(vis,i,adj);
            }
        }
        return ans;
    }
};