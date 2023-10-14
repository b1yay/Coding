#include <iostream>
using namespace std ;
float discount (string day, string month, float amount) ;
main(){
string day,month ;
float amount;
float result;
cout << "Enter Purchase Day: ";
cin >> day ;
cout << "Enter Purchase Month: ";
cin >> month ;
cout << "Enter Purchase Amount: ";
cin >> amount ;
result =discount ( day, month, amount);
cout << "Payable Amount after discount: " << result ;

}
float discount (string day, string month, float amount){
float d=amount;
if(day=="sunday" && month=="october"){
d=amount-(amount*0.1);
    }
    else if(day=="sunday"){
        d=amount-(amount*0.05) ;
    }
    return d;
}