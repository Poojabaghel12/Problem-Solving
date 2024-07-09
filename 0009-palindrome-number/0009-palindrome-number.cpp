class Solution {
public:
    bool isPalindrome(int x) {
        long int rev = 0;
        int temp = x;
        while(temp > 0){
            int z = temp%10;
            rev = rev*10+z;
            temp = temp/10;

        }
        return (rev == x);

    }
};