class Solution {
public:
    int compress(vector<char>& chars) 
    { 
       char last  = chars[0];
       int cnt = 1 ,j = 0;
    //    vector<char> ans;     
       for(int i = 1 ; i < chars.size() ;i++)
       {
            if(chars[i] == last)
                cnt++;
            else
            {
                // ans.push_back(last);
                chars[j++] = last;
                if(cnt!=1){
                    string countt = (to_string(cnt));
                    for(auto i : countt)
                        chars[j++] = i;
                }
                last = chars[i];
                cnt = 1;
            }
       }
        // ans.push_back(last);
        chars[j++] = last;
        if(cnt!=1){
            string countt = (to_string(cnt));
            for(auto i : countt)
                chars[j++] = i;
                
        }
        // chars = ans;
        return j;
    }
};