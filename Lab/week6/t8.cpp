#include <iostream>
using namespace std;
float discount(string day, string month, float total);
int main() {
    string day, month;
    float total;
    
    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month : ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> total;
    
    float payableAmount = discount(day, month, total);
    cout << "Payable Amount after discount: " << payableAmount << endl;
    
    return 0;
}
float discount(string day, string month, float total) {
    float discount = 0.0;
    if ((month == "October" || month == "March" || month == "August") ) {
                if (day == "Sunday") {
            discount = 0.1 * total;
        }
    }
    else if (month == "November" || month == "December" ) {
                 
        if (day== "Monday") {
            discount = 0.05 * total;
        }
    }
    float payableAmount = total - discount;
    return payableAmount;
}
