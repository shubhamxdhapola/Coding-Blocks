#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter N : ";
    cin >> n;

    int m = (n+1)/2;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m - i; j++) {
            cout << " ";
        }
        for(int j = 0; j < (i * 2) + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = m; i >= 0; i--) {
        for(int j = 0; j < m - i; j++) {
            cout << " ";
        }
        for(int j = 0; j < (i * 2)+ 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}