#include <iostream>
using namespace std;
void generateFibonacci(int length);

int main() {
    int length;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;
    generateFibonacci(length);

}
void generateFibonacci(int length) {
    int num1 = 0, num2 = 1, next;
    for (int i = 1; i <= length; ++i) {
        if ( i == length) {
        cout << num1 ;
        }
        else{
            cout << num1 << ", " ;
        }
        next =num1 + num2;
        num1 = num2;
        num2 = next;
    }
    cout << endl;
}
