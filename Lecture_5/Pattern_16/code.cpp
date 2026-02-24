#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter N : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        
        for(int j = 0; j < i * 2; j++) {
            cout << "  ";
        }
        for(int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = n; i > 0; i--) {
        
        for(int j = 0; j < i * 2; j++) {
            cout << "  ";
        }
        for(int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}