#include<iostream>
using namespace std ;
int volume(int boxes,int dimensions[]);
main(){
    int boxes,result;
    cout << "No. of Boxes: ";
    cin >> boxes;
    int dimensions[boxes];
    cout << "Enter the dimensions of the boxes (length, width, height); " << endl ;
    for(int i=0;i<boxes;i++){
        for(int y=0;y<3;y++){
        cin >> dimensions[i] ;
    }
}
result = volume(boxes,dimensions);
cout << "Total volume of all boxes: " << result ;
}
int volume(int boxes,int dimensions[]){
    int vol=0 ;
    for(int i= 0; i<boxes; i++){
        vol += dimensions[i]*dimensions[i+1]*dimensions[i+2];
    }
    return vol ;
}