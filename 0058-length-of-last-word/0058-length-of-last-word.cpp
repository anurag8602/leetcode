class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int n=s.length()-1;
        while(s[n]==' ')
            n--;
        while(n>=0){
            if(s[n]!=' ')
            {
                c++;
                n--;
            }
            else
            break;
        }
        return c;
    }
};