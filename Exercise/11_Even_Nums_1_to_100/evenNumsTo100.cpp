#include<iostream>
using namespace std;

void printEvenNums() {
    
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }
}

int main() {

    printEvenNums();

    return 0;
}