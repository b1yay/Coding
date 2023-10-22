#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit) ;

int main() {
    int  number, digit,result ;
    cout << "Enter a number: " ;
    cin >> number ;
    cout << "Enter the digit to check: ";
    cin >> digit ;
    result = frequencyChecker(number, digit) ;
    cout << "Frequency: " << result ;
}
int frequencyChecker(int number, int digit) {
    int frequency = 0;

    while (number > 0) {
        int a ;
        a = number % 10;
        if (a == digit) {
            frequency++;
        }
        number = number/10;
    }

    return frequency;
}

