#include<iostream>
using namespace std;
float perimeter(char shape,float value); 
main(){
char shape ;
float value,result ;
cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
cin >> shape ;
cout << "Enter the value: " ;
cin >> value ;
result= perimeter(shape,value) ;
cout << "The perimeter is: " << result ;
}
float perimeter(char shape,float value){
   float p;
    if(shape=='s'){
        p = 4*value ;
    }
    else if (shape=='c'){
        p= 6.28*value ;
    }
    else if (shape=='t'){
        p=3*value ;
    }
    else if(shape=='h'){
        p=6*value ;
    }
    return p ;
}