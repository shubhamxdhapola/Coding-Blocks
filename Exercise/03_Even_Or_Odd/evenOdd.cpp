#include<iostream>
using namespace std;

string evenOrOdd(int num) {
    return num%2 == 0 ? "Even" : "Odd";
}

int main() {

    int num;
    
    cout << "Enter a number : ";
    cin >> num;

    cout << evenOrOdd(num) ;

    return 0;
}