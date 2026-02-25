#include <iostream>
using namespace std;

int main() {

    int n;
    
    cout << "Enter N: ";
    cin >> n;

    int m = (n+1)/2;

    for(int i = 0; i < m; i++) {

        if(i == 0) {
            for(int j = 0; j < n; j++){
                cout << "* ";
            }
        } else {

        
        for(int j = 0; j < m - i; j++) {
            cout << "* ";
        }

        for(int j = 0; j < 2 * i; j++){
            cout << " ";
        }

        for(int j = 0; j < m - i; j++) {
            cout << "* ";
        }
    }
        cout << endl;
    }


    return 0;
}