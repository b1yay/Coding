#include <iostream>
using namespace std;
void calculateFuel(float d);
main(){ 
	float d;
	cout << "Enter the distance: " ;
	cin >> d;
	calculateFuel(d);
}
void calculateFuel(float d)
{	float fuel;
	fuel=d*10;
	if(d*10>100) 
{
	cout << "Fuel needed: " << fuel;
}
	if(d*10<100)
{
	cout << "Fuel needed: 100" ;

}

}