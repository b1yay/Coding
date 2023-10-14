#include <iostream>
#include <string>
using namespace std;
float income(string screeningType, int rows, int columns);

int main() {
    string screeningType;
    int rows, columns;
    float result ;

    cout << "Enter screening type (Premiere/Normal/Discount): ";
    cin >> screeningType;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    result = income(screeningType, rows, columns);
    cout << result << endl ;

}
float income(string screeningType, int rows, int columns) {
    float ticket;
    float total ;
    float pro = rows*columns ;
    if (screeningType == "Premiere") {
        ticket = 12.00;
    } else if (screeningType == "Normal") {
        ticket = 7.50;
    } else if (screeningType == "Discount") {
        ticket = 5.00;
    } 
    total = ticket * pro ;
    return total;
}