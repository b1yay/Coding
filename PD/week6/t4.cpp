#include <iostream>
#include <iomanip>

using namespace std;
float calculate (char serviceCode, char time, int minutes);
int main() {
    char serviceCode,time;
    int minutes;
    float result ;
    cout << "Enter service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    if (serviceCode=='p' || serviceCode=='P'){
         cout << "Enter time of the call (D/d for day, N/n for night): ";
         cin >> time ;
    }
    cout << "Enter the number of minutes used: ";
    cin >> minutes;
    result = calculate (serviceCode, time, minutes);
    cout << "Service Type: " << serviceCode << endl;
    cout << "Total Minutes Used: " << minutes << " minutes" << endl;
    cout << "Amount due: $" << result << endl ;
}
    
    float calculate (char serviceCode, char time, int minutes){
        float totalBill ;
    if (serviceCode == 'r' || serviceCode == 'R') {
        if (minutes <= 50) {
            totalBill = 10.00;
        } else {
            totalBill = 10.00 + 0.20 * (minutes - 50);
        }
    } else if (serviceCode == 'p' || serviceCode == 'P') {
        if (time=='D' || time == 'd'){
        if (minutes <= 75) {
            totalBill = 0.00;
        } else {
            totalBill += 0.10 * (minutes - 75);
        }
        }
        else if (time =='n' || time == 'N') {
        if (minutes <= 100) {
            totalBill += 0.00;
        } else {
            totalBill += 0.05 * (minutes - 100);
        }
        }

    } else {
        cout << "Error" << endl;
    }
    return totalBill ;
}

