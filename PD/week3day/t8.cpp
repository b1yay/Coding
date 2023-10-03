#include <iostream>
using namespace std;
main() {
	float vegprice;
	float fruitprice;
	int totalveg;
	int totalfruit;
	float a;
	float b;
	int earnings;
	cout << "Enter vegetable price per kilogram (in coins): " ;
	cin >> vegprice;
	cout << "Enter fruit price per kilogram (in coins): " ;
	cin >> fruitprice ;
	cout << "Enter total kilograms of vegetables: " ;
	cin >> totalveg ;
	cout << "Enter total kilograms of fruits: " ;
	cin >> totalfruit ;
	a= (vegprice*totalveg)/1.94 ;
	b=(fruitprice*totalfruit)/1.94 ;
	earnings=a+b ;
	cout << "Total earnings in Rupees (Rps): " << earnings ;
	



}