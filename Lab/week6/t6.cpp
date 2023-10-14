#include <iostream>
#include <string>
using namespace std;
double calculateDiscount(string day, string month, double totalAmount) ;
int main() {
    string day;
    string month;
    double totalAmount;

    cout << "Enter Purchase Day: ";
    cin >> day;

    cout << "Enter Purchase Month: ";
    cin >> month;

    cout << "Enter Purchase Amount: ";
    cin >> totalAmount;

    double payableAmount = calculateDiscount(day, month, totalAmount);
    cout << "Payable Amount after discount: " << payableAmount << endl;

}
double calculateDiscount(string day, string month, double totalAmount) {
    if (day =="Sunday" || month ==" October") {
        double discountAmount =totalAmount-( 0.1 * totalAmount);
        return discountAmount;
    } else {
        return totalAmount;
    }
}

