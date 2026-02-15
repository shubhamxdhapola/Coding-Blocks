#include<iostream>
using namespace std;

int factorial(int num) {

    int fact = 1;

    for(int i = num; i > 0; i--) {
        fact *= i;
    }

    return fact;
}

int main() {

    int num;

    cout << "Enter Num : ";
    cin >> num;

    cout << factorial(num);

    return 0;
}