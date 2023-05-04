class Solution {
public:
    int subtractProductAndSum(int n) {
        int number = n;
        int sum = 0;
        int product = 1;

        while (number) {
            int lastDigit = (number % 10);
            sum += lastDigit;
            product *= lastDigit;
            number /= 10;
        }

        return product - sum;
    }
};