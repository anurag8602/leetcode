class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str="";
        int a=0,b=0;
        while(a<word1.size() && b<word2.size())
        {
            str=str+word1[a];
            a++;
            str=str+word2[b];
            b++;
        }
        if(a<word1.size())
        {
            for(int i=a;i<word1.size();i++)
            {
                str=str+word1[i];
            }
        } 
        else{
            for(int i=b;i<word2.size();i++)
            {
                str=str+word2[i];
            }
        }      
        return str;
    }
};