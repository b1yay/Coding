#include<iostream>
using namespace std;
void insertArrayInMiddle(int array1[], int arraySize1, int array2[], int arraySize2);

main(){
    int arraySize1;
    int array1[arraySize1];
    int arraySize2;
    int array2[arraySize2];

    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>>arraySize1;
    cout<<"Enter "<<arraySize1<<" elements for the first array, one per line:"<<endl;
    for(int i = 0; i < arraySize1; i++)
    {
        cin>>array1[i];
    }
    cout<<"Enter the number of elements for the second array: ";
    cin>>arraySize2;
    cout<<"Enter "<<arraySize2<<" elements for the second array, one per line:"<<endl;
    for(int i = 0; i < arraySize2; i++)
    {
        cin>>array2[i];
    }
    insertArrayInMiddle(array1,arraySize1,array2,arraySize2);
}

void insertArrayInMiddle(int array1[], int arraySize1, int array2[], int arraySize2)
{
  cout<<"Resulting array: ["<<array1[0]<<", ";
  for(int i = 0; i < arraySize2 ; i++)
  {
    cout<<array2[i]<<", ";
  }
  cout<<array1[1]<<"]";
}