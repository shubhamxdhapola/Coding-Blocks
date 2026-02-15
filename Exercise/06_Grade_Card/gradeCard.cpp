#include<iostream>
using namespace std;

string grade(int marks) {

    if(marks >= 90) {
        return "A";
    } else if(marks >= 80 && marks < 90) {
        return "B";
    } else if(marks >= 70 && marks < 80) {
        return "C";
    } else if(marks >= 60 && marks < 70){
        return "D";
    }
}

int main() {
    
    int marks;
    
    cout << "Enter marks : ";
    cin >> marks;

    cout << grade(marks);

    return 0;
}