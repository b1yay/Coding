#include <iostream>
using namespace std;
main(){
	int minutes;
	int fps;
	int frames;
	cout << "Number of Minutes: " ;
	cin >> minutes ;
	cout << "Frames per Second: " ;
	cin >> fps ;
	frames = (minutes*60)*fps ;
	cout << "Total Number of Frames: " << frames ;
}