#include<iostream>
using namespace std;
bool payment(double elements[]);

main(){
    
    double change[4];
    bool result ;

    cout<<"Enter quarters: ";
    cin>>change[0];

    cout<<"Enter dimes: ";
    cin>>change[1];
    
    cout<<"Enter nickels: ";
    cin>>change[2];

    cout<<"Enter pennies: ";
    cin>>change[3];

    cout<<"Enter the total amount due: $";
    cin>>change[4];

     result=payment(change);
    cout<<"Can you pay the amount? ";
    if (result==false)
    {
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    

}
bool payment(double change[]){
     change[0]  =0.25*change[0];
     change[1]  =0.10*change[1];
     change[2]  =0.05*change[2];
     change[3]  =0.01*change[3];
     double sum;
     for (int i = 0; i < 4; i++)
     {
        sum=sum+change[i];
     }
     if(sum>= change[4]){
        return true;
     }
     else{
        return false;
     }
     
}