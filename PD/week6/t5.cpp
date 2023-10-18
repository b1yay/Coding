#include <iostream>
#include <string>
using namespace std;
double price(string fruit, string day, double quantity);
main(){
    string fruit,day;
    int quantity;
    cout<<"Enter the fruit name: ";
    cin>> fruit;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday" || day=="Saturday" || day=="Sunday")
  {  
    cout<<price(fruit,day,quantity);
    }
if(day!="Monday" && day!="Tuesday" && day!="Wednesday" && day!="Thursday" && day!="Friday" && day!="Saturday" && day!="Sunday"){
    cout<<"error";
}

}

double price(string fruit, string day, double quantity) {
    double price ;

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
        if (fruit == "banana") {
            price = 2.50*quantity;
        } else if (fruit == "apple") {
            price = 1.20*quantity;
        } else if (fruit == "orange") {
            price = 0.85*quantity;
        } else if (fruit == "grapefruit") {
            price = 1.45*quantity;
        } else if (fruit == "kiwi") {
            price = 2.70*quantity;
        } else if (fruit == "pineapple") {
            price = 5.50*quantity;
        } else if (fruit == "grapes") {
            price = 3.85*quantity;
        } else {
            cout << "error" << endl;
        }
    } else if (day == "Saturday" || day == "Sunday") {
        if (fruit == "banana") {
            price = 2.70*quantity;
        } else if (fruit == "apple") {
            price = 1.25*quantity;
        } else if (fruit == "orange") {
            price = 0.90*quantity;
        } else if (fruit == "grapefruit") {
            price = 1.60*quantity;
        } else if (fruit == "kiwi") {
            price = 3.00*quantity;
        } else if (fruit == "pineapple") {
            price = 5.60*quantity;
        } else if (fruit == "grapes") {
            price = 4.20*quantity;
        } else {
            cout << "error" << endl;
            return 0;
        }
    } else {
        cout << "error" << endl;
    }

    return price ;
}