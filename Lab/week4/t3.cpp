#include <iostream>
using namespace std;
void howManyStickers(int n);
main(){
	int n ;
	cout << "Enter the side length of the Rubik's Cube: " ;
	cin >> n ;
	howManyStickers(n);

}
void howManyStickers (int n)
{
	int stickers;
	stickers=n*(6*n);
	cout << "Number of stickers needed: " << stickers ;
}