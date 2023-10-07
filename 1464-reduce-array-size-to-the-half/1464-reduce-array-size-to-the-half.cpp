class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        int c=0;
        int n=arr.size();
        int m=n;
        for(auto no:arr)
            mp[no]++;
        priority_queue<pair<int,int>>pq;
        pair<int,int>p;
        for(auto i:mp)
        {
            pq.push(make_pair(i.second,i.first));
        }
        while(m>n/2)
        {
            p=pq.top();
            m-=p.first;
            c++;
            pq.pop();
        }
        return c;
    }
};