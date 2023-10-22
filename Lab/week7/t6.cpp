#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd) ;

int main() {
        int num1, num2,gcd,lcm;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
         gcd = calculateGCD(num1, num2);
         lcm = calculateLCM(num1, num2, gcd);
        cout << "GCD: " << gcd << endl ;
        cout << "LCM: " << lcm ;
}
int calculateGCD(int num1, int num2) {
    while (num2 > 0) {
        int a;
        a = num2;
        num2 = num1 % num2;
        num1 = a;
    }
    return num1;
}
int calculateLCM(int num1, int num2, int gcd) {
    return (num1 * num2) / gcd;
}
