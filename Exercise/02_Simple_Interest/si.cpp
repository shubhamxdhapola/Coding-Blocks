#include<iostream>
using namespace std;

float simpleInterest(int p, int r, int t) {
    return (p * r * t)/100;
}

int main() {

    int principle, rate, time;

    cout << "Enter principle : ";
    cin >> principle;

    cout << "Enter rate : ";
    cin >> rate;

    cout << "Enter time : ";
    cin >> time;

    cout << simpleInterest(principle, rate, time);

    return 0;
}