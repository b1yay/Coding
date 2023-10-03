#include <iostream>
using namespace std;
main()
{
	string name;
	float adult;
	float child;
	float adultnum;
	float childnum;
	float charity;
	float a;
	float b;
	float t;
	float d;
	float amount;
	cout << "Enter the movie name: " ;
	cin >> name ;
	cout << "Enter the adult ticket price: $" ;
	cin >> adult;
	cout << "Enter the child ticket price: $" ;
	cin >> child ;
	cout << "Enter the number of adult tickets sold: " ;
	cin >> adultnum ;
	cout << "Enter the number of child tickets sold: " ;
	cin >> childnum ;
	cout << "Enter the percentage of the amount to be donated to charity: " ;
	cin >> charity ;
	a= adult*adultnum ;
	b= child*childnum ;
	t= a+b ;
	d= t*(charity/100) ;
	amount= t-d ;
	cout << endl ;
	cout << "Movie: " << name << endl;
	cout << "Total amount generated from ticket sales: $" << t << endl;
	cout << "Donation to charity (10%): $" << d << endl ;
	cout << "Remaining amount after donation: $" << amount ;

}