#include <iostream>
using namespace std;
main(){
	string name;
	int w;
	int wl;
	cout << "Enter the Name of the Person: " ;
	cin >> name ;
	cout << "Enter the target weight loss in kilograms: " ;
	cin >> w ;
	wl = w*15 ;
	cout << "" << name << " will need " << wl << " days to lose " << w << " kg of weight by following the doctor's suggestions" ; 

}