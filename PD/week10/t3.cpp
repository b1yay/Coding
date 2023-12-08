#include<iostream>
#include<string>
using namespace std;

int num=0;
bool isRepeatingCycle(int num,int arr[],int length);
main(){
    cout<<"Enter the length of the array: ";
    cin> num;
    int arr [num];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i = 0 ; i < num ; i++)
    {
        cin>>arr[i];
    }
    int length;
    cout<<"Enter the length of the cycle: ";
    cin>>length;
    bool result=isRepeatingCycle (num,arr,length);
    cout<<"Output: "<<result;
}
bool isRepeatingCycle(int num,int arr[],int length)
{
    bool result;
     if(length >num)
        {
            result=true;
        }
        else
        {
    for(int i = 0 ; i < length ; i++)
    {
        if(i+length>length)
        {
            break;
        }
        else if(arr[i]==arr[i+length])
        {
            result=true;
        }
        else
        {
            result=false;
        }
    }
        }
    return result;
}