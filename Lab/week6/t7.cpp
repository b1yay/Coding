#include <iostream>
#include <string>
using namespace std;
double discount(string day, string month, double total);
int main() {
    string day, month;
    double total;
    double payable ;

    cout << "Enter Purchase Day: ";
    cin >> day;

    cout << "Enter Purchase Month: ";
    cin >> month ;

    cout << "Enter Purchase Amount: ";
    cin >> total;

    payable = discount(day,month,total);
    cout << "Payable Amount after discount: " << payable << endl;
}
double discount(string day, string month, double total) {
    double amount = total ;
    if ((day == "Sunday") && (month == "October" || month == "March" || month == "August")) {
        amount = total -( 0.1 * total);
        return  amount;
    } else {
        return total;
    }
}