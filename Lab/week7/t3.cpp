#include <iostream>
using namespace std;
int totalDigits(int number);

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int digitsCount = totalDigits(num);
    cout << "Total number of digits: " << digitsCount << endl;
}
int totalDigits(int number) {
    int count = 0;

    while (number >= 0) {
        number /= 10;
        count++;
    }

    return count;
}
