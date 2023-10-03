#include <iostream>
using namespace std;
void airlineCompany(string name,float a);
main()
{
	string name;
	float a;
        cout << "Enter the country's name: ";
	cin >> name ;
	cout << "Enter the ticket price in dollars: $" ;
	cin >> a ;
	airlineCompany(name,a) ;

}
void airlineCompany(string name,float a) 
{
	float b,c;

	if (name=="Pakistan"){
	b=a*0.05;
	c=a-b;
	cout << "Final ticket price after discount: $" << c << endl ;
}
	if (name=="Ireland"){
	b=a*0.1;
	c=a-b;
	cout << "Final ticket price after discount: $" << c << endl ;
}
if (name=="India"){
	b=a*0.2;
	c=a-b;
	cout << "Final ticket price after discount: $" << c << endl ;
}
if (name=="England"){
	b=a*0.3;
	c=a-b;
	cout << "Final ticket price after discount: $" << c << endl ;
}
if (name=="Canada"){
	b=a*0.45;
	c=a-b;
	cout << "Final ticket price after discount: $" << c << endl ;
}

}