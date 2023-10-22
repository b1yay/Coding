#include <iostream>
using namespace std;
void printTable(int number) ;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    printTable(number);

}
void printTable(int number) {
    int i = 1;
    while (i <= 10) {
        cout << number << " X " << i << " = " << (number * i) << endl;
        i++;
    }
}

