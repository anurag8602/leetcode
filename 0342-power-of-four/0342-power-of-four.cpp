class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && fmod(log2(n), 2) == 0;
    }
};