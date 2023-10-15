#include <iostream>
using namespace std;
float projectTimeCalculation(float hours,float days,float workers);
main() {
    float hours,days,workers,total ;
    cout << "Enter the needed hours: " ;
     cin >> hours ;
    cout << "Enter the days that the firm has: " ;
    cin >> days ;
    cout << "Enter the number of all workers: " ;
    cin >> workers ;
    total=projectTimeCalculation(hours,days,workers) ;

}
float projectTimeCalculation(float hours,float days,float workers){
    float a,b,c,d;
    a = days*0.1 ;
    b= days-a ;
    c=b*workers*10 ;
    d= hours-c;
    if (d>c){
        d=hours-c;
        cout << "Not enough time! " << d << " hours needed." ;
    }
        if(d<c){
            d=c-hours ;
            cout << "Yes! " << d << " hours left.";
        }
        return  d;
    
}