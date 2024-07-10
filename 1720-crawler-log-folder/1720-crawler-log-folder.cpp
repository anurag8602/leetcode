class Solution {
public:
    int minOperations(vector<string>& logs) {
        int x=0;
        for(auto i:logs)
        {
            if(i[1]=='/' && i[0]=='.')
                continue;
            else if(i[1]=='.')
            {
                if(x==0)
                    continue;
                else 
                    x--;
            }  
            else if((i[0]>='0' && i[0]<='9') || (i[0]>='a' && i[0]<='z') || (i[0]>'A' && i[0]<='Z')) x++;
        }
        return abs(x);
    }
};