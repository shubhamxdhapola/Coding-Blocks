#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter N : ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i + 1; j++) {
            cout << "  ";
        }

        for (int j = 0; j < i + 1; j++) {
            if (j % 2 == 0) {
                cout << "* ";
            } else {
                cout << "! ";
            }
        }

        for (int j = 0; j < i; j++) {
            if (i % 2 != 0) {
                if (j % 2 == 0) {
                    cout << "* ";
                } else {
                    cout << "! ";
                }
            } else {
                if (j % 2 == 0) {
                    cout << "! ";
                } else {
                    cout << "* ";
                }
            }
        }

        for (int j = 0; j < n - i + 1; j++) {
            cout << "  ";
        }

        cout << "\n";
    }
    return 0;
}