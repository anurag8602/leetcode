class Solution {
public:
    string frequencySort(string s) 
    {
        string ret="";
        unordered_map<char,int> mp;
        for(int i=0 ;i<s.length();i++)
            mp[s[i]]++;
        // while(!mp.empty())
        // {
        //     int maxi=0;
        //     char ch;
        //     for(auto i :mp)
        //     {
        //         if(i.second>maxi)
        //         {
        //             ch=i.first;
        //             maxi=i.second;
        //         }
        //     }
        //     for(int j=0;j<maxi;j++)
        // }
        priority_queue<pair<int,char>> pq;
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        while(!pq.empty())
        {
            char ch=pq.top().second;
            int t=pq.top().first;
            for(int j=0;j<t;j++)
            {
                ret+=ch;
            }
            pq.pop();
        }
        return ret;
    }
};