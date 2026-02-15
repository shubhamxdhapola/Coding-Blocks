#include<iostream>
using namespace std;

void printTable(int num) {

    for(int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << "\n";
    }
}

int main() {

    int num;

    cout << "Enter Num : ";
    cin >> num;

    printTable(num);

    return 0;
}