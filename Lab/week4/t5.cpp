#include <iostream>
using namespace std;
main(){
	int n;
	cout << "Enter your age: " ;
	cin >> n;
	if (n>=18){
	cout << "You are eligible to vote." << endl ;
}
	if (n<18){
	cout << "You are not eligible to vote." << endl;

}
}