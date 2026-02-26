#include <iostream>
using namespace std;

int main() {

    int n;
    
    cout << "Enter N: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++){
            cout << "\t";
        }
        for(int j = 0; j < i + 1; j++) {
            cout << j + 1 << "\t";
        }
        for(int j = i; j >= 1; j--) {
            cout << j << "\t";
        }
        cout << endl;
    }
    return 0;
}   