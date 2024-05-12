#include<iostream>
#include<cmath>
using namespace std;

int main() {
    // hollow half pyramid
    int height;
    cout << "enter height of squire" << endl;
    cin >> height;

    for (int row = 0; row < height; row++) {
        int totalCol = row + 1;
        for (int col = 0; col < totalCol; col++) {
            if(row == 0 || row == 1 || row == height - 1) {
                cout << "* ";
            } else {
                if (col == 0 || col == totalCol -1) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
        }

        cout << endl;
    }  

    return 0;
}
