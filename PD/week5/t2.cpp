# include <iostream>
using namespace std;
float volume(float a,float b, float c, string d);
main()
{
	float a,b,c,result ;
	string d;
	cout<< "Enter the length of the pyramid (in meters): " ;
	cin >> a;
	cout << "Enter the width of the pyramid (in meters): ";
	cin >> b;
	cout << "Enter the height of the pyramid (in meters): ";
	cin>> c;
	cout << "Enter the desired output unit (millimeters,centimeters,meters,kilometers): " ;
	cin >> d ;
	result = volume(a,b,c,d);
	cout<< "The volume of the pyramid is: " << result << " cubic " << d;
}
float volume(float a,float b, float c, string d) {
	float vol1;
	float res;
	vol1=(a*b*c)/3 ;
	if(d=="millimeters"){
 	res=vol1*1000*1000*1000;
}
if(d=="centimeters"){
 	res=vol1*100*100*100;
}
if(d=="meters"){
 	res=vol1;
}
if(d=="kilometers"){
 	res=vol1/1000/1000/1000;
}
	return res;
	
}