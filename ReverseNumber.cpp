class Solution {
public:
    // int reverse(int x) {
    //     int resNumber = 0;
    //    while(x!=0){
    //        int y = x % 10;
    //        x = x/10;

    //     if (resNumber > INT_MAX / 10 || (resNumber == INT_MAX / 10 && y > 7)) {
    //         return 0;
    //     }
    //     if (resNumber < INT_MIN / 10 || (resNumber == INT_MIN / 10 && y < -8)) {
    //         return 0;
    //     }

    //        resNumber = (resNumber * 10) + y;
    //    }
    //    return resNumber;
    // }

     int reverse(int x) {
       long long ans = 0;
        while (x) {
            int temp = ans * 10 + x % 10;
            if (temp / 10 != ans)
                return 0;
            ans = temp;
            x /= 10;
        }
        return ans;
    }
};
