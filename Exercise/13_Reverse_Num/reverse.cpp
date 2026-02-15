#include<iostream>
using namespace std;

int reverseNum(int num) {

    int rev = 0;

    while(num > 0) {
        int lastDigit = num%10;
        rev = rev * 10 + lastDigit;
        num /= 10;
    }

    return rev;
}

int main() {

    int num;
    
    cout << "Enter num : ";
    cin >> num;

    cout << reverseNum(num);

    return 0;
}