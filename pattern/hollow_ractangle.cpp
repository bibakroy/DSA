#include<iostream>
#include<cmath>
using namespace std;

int main() {
    // hollow ractangle
    int height;
    int width;
    cout << "enter length of ractangle" << endl;
    cin >> height;
    cout << "enter width of ractangle" << endl;
    cin >> width;

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if(row == 0 || row == height -1) {
                cout << "* ";
            } else {
                if(col == 0 || col == width -1) {
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
