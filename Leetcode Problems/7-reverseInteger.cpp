class Solution {
public:
    int reverse(int x) {
        int reversedInt = 0;

        while (x != 0) {
            int lastDigit = x % 10;
            if ((reversedInt < INT_MIN/10) || (reversedInt > INT_MAX/10)) {
                return 0;
            }
            reversedInt = (reversedInt * 10) + lastDigit;
            x /= 10;
            
        }

        return reversedInt;
    }
};