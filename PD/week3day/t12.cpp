#include <iostream>
using namespace std ;
main() 
{
	float sq ;
	float width ;
	float height ;
	float paint ;
	cout << "Number of square meters you can paint: " ;
	cin >> sq ;
	cout << "Width of the single wall (in meters): " ;
	cin >> width ;
	cout << "Height of the single wall (in meters): " ;
	cin >> height ;
	paint = sq/(height*width) ;
	cout << "Number of walls you can paint: " << paint ;
}