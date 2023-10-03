#include <iostream>
using namespace std;
main(){
	int size;
	int cost;
	int area;
	int cpp;
	int cpsq;
	cout << "Enter the size of the fertilizer bag in pounds: " ;
	cin >> size;
	cout << "Enter the cost of the bag: $" ;
	cin >> cost;
	cout << "Enter the area in square feet that can be covered by the bag: " ;
	cin >> area ;
	cpp = cost/size ;
	cpsq = cost/area ;
	cout << "Cost of fertilizer per pound: $" << cpp << endl;
	cout << "Cost of fertilizing per square foot: $" << cpsq ;

}