#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter N : ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        // for(int j = 0; j < n - i - 1; j++) {
        //     cout << "  ";
        // }
        // for(int j = 0; j < i + 1; j++) {
        //     cout << "* ";
        // }
        
        for(int j = 0; j < ((i == n - 1) ? n - i : n - i - 1); j++) {
            cout << "  ";
        }
        for(int j = 0; j < ((i == n - 1) ? i  : i + 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}