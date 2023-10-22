#include <iostream>
using namespace std;
int digitSum(int num);

int main() {
    int num,sum;
    cout << "Enter a number: ";
    cin >> num;
    sum = digitSum(num);
    cout << "Sum of digits: " << sum << endl;
    return 0 ; 
}
int digitSum(int num) {
    if (num < 0){
        num = -num ;
    }
    int sum = 0;
    while (num > 0) {
        sum = sum + (num % 10) ; 
        num = num/10; 
    return sum;
}
}