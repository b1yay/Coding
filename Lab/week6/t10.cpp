#include <iostream>
using namespace std;
bool areSameNumber(int num1, int num2, int num3);

int main() {
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    bool result = areSameNumber(num1, num2, num3);
    cout << result << endl ;

}
bool areSameNumber(int num1, int num2, int num3) {
    int result ;
    if (num1 == num2 && num2 == num3)
    {
        result = 1;
    }
    else {
        result = 0 ;
    }
    return result ;
}
