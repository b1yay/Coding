#include <iostream>
using namespace std ;
int doesBrickFit(int height, int width, int depth, int h, int w);

main(){
int height,width,depth,w,h, result ;
cout << "Enter height: ";
cin >> height ;
cout << "Enter width: ";
cin >> width ;
cout << "Enter depth: ";
cin >> depth ;
cout << "Enter width of hole: ";
cin >> w ;
cout << "Enter height of hole: ";
cin >> h ;
result =doesBrickFit(height, width, depth, h, w);
cout << result ;
}
int doesBrickFit(int height, int width, int depth, int h, int w){
int size1,size2 ;
size1 = height*width ;
size2 = w*h ;
if (size1==size2){
return true ;
}
else {
    return false ;
}
}