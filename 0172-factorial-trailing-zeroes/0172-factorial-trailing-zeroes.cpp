class Solution {
public:
    int trailingZeroes(int n) {
        int rev = 0;
        for(int i=5; i<=n; i=i*5){
            rev = rev+n/i;
        }
        return rev;
    }
};