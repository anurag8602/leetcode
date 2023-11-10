class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int i,j;
        i=abs(fx-sx);
        j=abs(fy-sy);
        int mat=max(i,j);
        if(mat==0 && t==1)
            return false;
        else 
            true;
        if(mat>t)
            return false;
        else
            return true; 
    }
};