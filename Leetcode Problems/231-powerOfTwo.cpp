class Solution {
public:
    bool isPowerOfTwo(int n) {
        int power = 1;
        
        for (int i = 0; i <= 30; i++ ) {

            if (power == n) {
                return true;
            }

            if (power < INT_MAX / 2) {
                power *= 2;
            }
            
        }

        return false;
    }
};