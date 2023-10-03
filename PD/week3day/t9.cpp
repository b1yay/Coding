#include <iostream> 
using namespace std;
main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int sum;
	cout << "Enter a 4-digit number: " ;
	cin >> a ;
	b=a%1000 ;
	c=b%100 ;
	d=c%10 ;
	e=a/1000 ;
	f=b/100 ;
	g=c/10 ;
	h=d ;
	sum = e+f+g+h ;
	cout << "Sum of the individual digits: " << sum ;
	
	
}