#include<iostream>
#include<cmath>
using namespace std;

int main() {
    // hollow ractangle
    int side;
    cout << "enter side of squire" << endl;
    cin >> side;

    for (int row = 0; row < side; row++) {
        for (int col = 0; col < side; col++) {
            if(row == 0 || row == side -1 || col == 0 || col == side -1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }  

    return 0;
}
