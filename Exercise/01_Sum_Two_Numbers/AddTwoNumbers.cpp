#include<iostream>
using namespace std;


int addTwoNums(int num1, int num2) {
    return num1 + num2;
}

int main() {

    int num1, num2;

    cout << "Enter first number : " ;
    cin >> num1;

    cout << "Enter second number : " ;
    cin >> num2;

    cout << "Sum is : " << addTwoNums(num1, num2);
    
    return 0;
}