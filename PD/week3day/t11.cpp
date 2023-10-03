#include <iostream>
using namespace std;
main(){
	int age;
	int num;
	int avg;
	cout << "Enter the person's age: " ;
	cin >> age ;
	cout << "Enter the number of times they've moved: " ;
	cin >> num ;
	avg = age/(num+1) ;
	cout << "Average number of years lived in the same house: " << avg ;
}