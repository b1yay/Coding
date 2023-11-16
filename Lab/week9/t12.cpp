#include<iostream>
#include<string>
using namespace std;
bool special(int elements[],int size);

main(){
    int size;
    int elements[size];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter "<<size<<" elements of the array:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>elements[i];
    }
    int newsize=sizeof(elements)/sizeof(elements[0]);
    special(elements,size);
}
bool special(int elements[],int size){
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (i==0 || i%2==0)
        {
         if (elements[i]%2 != 0)
         {
            count++;
         }   
        }
        else{
            if (elements[i]%2 == 0)
            {
                count++;
            }
            
        }
        
    }
    if(count==0){
        cout<<"The array is special";
    }
    else{
        cout<<"The arrayis not special";
    }
    
    
}