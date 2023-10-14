#include <iostream>
using namespace std ;
int  findGreatest (int a,int b,int c) ;
main (){
int a,b,c,result ;
cout << "Enter the first number: " ;
cin >> a;
cout << "Enter the second number: " ;
cin >> b;
cout << "Enter the third number: " ;
cin >> c;
result = findGreatest (a,b,c) ;
cout << "The greatest number among " << a << ", " << b << ", and " << c << " is: "<< result ;



}
int  findGreatest (int a, int b, int c){
    int d ;
    if(a>=b && a>=c){
        d=a ;
    }
    else if(b>=a&& b>=c){
            d=b ;
    }
    else if (c>=a && c>=b){
            d=c;
    }
    return d ;
}