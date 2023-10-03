#include <iostream>
using namespace std;

int main() {
    int number,a,b,c,d,e,f;
    cout << "Enter a three-digit number: ";
    cin >> number;
    a=number/100;
    d=number%100;
    b=d/100;
    c=d%10;
    if (a==c) {
    cout << "The number is symmetrical." ;
} 
    else {
    cout << "The number is not symmetrical." ;
} 
}
