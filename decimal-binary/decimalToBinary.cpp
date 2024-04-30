#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimalMethod1(int n) {
    // Division Method
    int binary = 0;
    int i = 0;

    while (n > 0) {
        int bit = n % 2;
        binary = binary + bit * pow(10, i++);
        n /= 2;
    }

    return binary;
}

int binaryToDecimalMethod2(int n) {
    // bitwise Method
    int binary = 0;
    int i = 0;

    while (n > 0) {
        int bit = n & 1;
        binary = binary + bit * pow(10, i++);
        n = n >> 1;
    }

    return binary;
}

int main() {
    int decimal;
    cin >> decimal;
    cout << "Method 1: " << binaryToDecimalMethod1(decimal) << endl;
    cout << "Method 2: " << binaryToDecimalMethod2(decimal) << endl;
    return 0;
}
