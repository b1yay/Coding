#include <iostream>
using namespace std;
int numbers(int a,int b) ;
main()
{
    int a,b,c ;
    cout << "Enter the first number: ";
    cin >> a ;
    cout << "Enter the second number: ";
    cin >> b ;
    c = numbers(a,b);
    cout << c ;

}
int numbers(int a,int b){
    if(a>b){
        return 1 ;
    }
    else{
        return 0 ;
    }
}