class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }
        long long reversed = 0;
        long long orginal = x;

        while(x){
            int digit = x %10;
             x = x/10;
            reversed = reversed *10 +digit;
           

        }
        return (reversed == orginal);
    }
};
