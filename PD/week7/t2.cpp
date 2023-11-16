#include <iostream>
using namespace std;
void print1(int row);
void print2(int row);
main (){
int row;
cout << "Enter desired number of rows: ";
cin >> row ;
print2(row) ;
print1(row);
}
void print1(int row){
for (int x = row ; x>=1 ; x--){
    for (int z = 1 ; z<=row-x ; z++ ){
        cout << " "  ;
    }
        for (int y= x ; y>= 1 ; y--){
            cout << "*" ;
        }
        cout<< endl ;
    }
}
void print2(int row){
for(int a=1; a<= row ; a++){
    for (int z = 1 ; z<=row-a ; z++ ){
        cout << " "  ;
    }
    for(int b=1 ; b<=a ; b++){
        cout << "*";
    }
    cout << endl ;

}}