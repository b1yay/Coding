#include <iostream>
using namespace std;
float taxCalculator(char type, int price);
main() {
	char type;
	int price;
	float final;
	cout << "Enter the vehicle type code(M, E, S , T): " ;
	cin >> type;
	cout << "Enter the price of the vehicle: $" ;
	cin >> price;
	final = taxCalculator(type,price) ;
	cout << "The final price of a vehicle of type " << type << " after adding the tax is $" << final ;

}
float taxCalculator(char type, int price) {
	float price2;
	float tax;
	if(type=='M'){
	tax= price*6/100;
	cout << tax << endl;
	price2= price+tax ;
	}
	if(type=='E'){
	tax= price*8/100 ;
	price2= price+tax ;
	}
        if(type=='S'){
	tax= price*10/100 ;
	price2= price+tax ;
	
	}
	if(type=='V'){
	tax= price*12/100 ;
	price2= price+tax ;
	
	}
	if(type=='T'){
	tax= price*15/100 ;
	price2= price+tax ;
	} 
	return price2 ;
}