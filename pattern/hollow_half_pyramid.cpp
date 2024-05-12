#include<iostream>
#include<cmath>
using namespace std;

int main() {
    // hollow half pyramid
    int height;
    cout << "enter height of squire" << endl;
    cin >> height;

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < row + 1; col++) {
            cout << "*";
        }

        cout << endl;
    }  

    return 0;
}
