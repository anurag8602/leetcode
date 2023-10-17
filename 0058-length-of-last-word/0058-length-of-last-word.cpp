int su = []{std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
class Solution {
public:
    int lengthOfLastWord(string s) {
        su;
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