class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n!=0) { // checking if all digits are zero or not. if not, then while continue execution.

            if (n & 1) { // checking last digit.
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};