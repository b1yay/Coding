#include <iostream>
using namespace std;
main()
{
	int sides;
	int s;
	cout<< "Enter the number of sides of the polygon: ";
	cin >> s;
	sides=(s-2)*180 ;
	cout << "The sum of internal angles of a " << s << "-sided polygon is: " << sides << " degrees" ;
}