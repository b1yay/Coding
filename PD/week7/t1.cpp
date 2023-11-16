#include <iostream>
using namespace std;
void print(int row);
main (){
int row;
cout << "Enter desired number of rows: ";
cin >> row ;
print(row) ;
}
void print(int row){
for (int x = row ; x>=1 ; x--){
    for (int y= x ; y>= 1 ; y--){
        cout << "*"  ;
    }
cout << endl;
}

}