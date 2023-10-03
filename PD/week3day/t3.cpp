#include <iostream>
using namespace std;
main()
{
	int iv;
	int a;
	int s;
	int fv;
	cout << "Enter Initial Velocity (m/s): " ;
	cin >> iv ;
	cout << "Enter Acceleration (m/s^2): " ;
	cin >> a;
	cout << "Enter Time (s): " ;
	cin >> s ;
	fv = (a*s) + iv ;
	cout << "Final Velocity (m/s): " << fv ;
}