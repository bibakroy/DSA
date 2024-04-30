#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimalMethod1(int n) {
    int decimal = 0;
    int i = 0;

    while (n) {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n /= 10;
    }

    return decimal;
}

int main() {
    int binaryNo = 10111;
    cout << binaryToDecimalMethod1(binaryNo) << endl;
    return 0;
}
