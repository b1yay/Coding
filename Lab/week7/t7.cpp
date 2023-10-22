#include<iostream>
#include<iomanip>
using namespace std;
void percentage(int);
main(){
    int count;
    cout<<"Enter numbers count: ";
    cin>>count;
    percentage(count);
 
}
void percentage(int count){
    float p1=0.0,p2=0.0,p3=0.0,p4=0.0,p5=0.0;
    for (int  x = 1; x <= count; x++)
    {int num;
       cout<<"Enter a number: ";
       cin>>num;
       if(num<200){
        ++p1;
       }
        else if(num>=200 && num<400){
        ++p2;
       }
           else if(num>=400 && num<600){
       ++p3;
       }
           else if(num>=600 && num<800){
        ++p4;
       }
           else if(num>=800 && num<=1000){
        ++p5;
       }}
        p1=(p1/count)*100;
       p2=(p2/count)*100;
       p3=(p3/count)*100;
       p4=(p4/count)*100;
       p5=(p5/count)*100;

    

cout<< fixed<<setprecision(2)<< p1 <<"%" <<endl ;
cout<<fixed << setprecision(2) << p2 <<"%" <<endl ;
cout<<fixed << setprecision(2) <<  p3 <<"%" <<endl ;
cout<<fixed << setprecision(2) <<  p4 <<"%" <<endl ;
cout<<fixed << setprecision(2) << p5 <<"%" ;
    }