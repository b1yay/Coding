#include<iostream>
using namespace std;
int progress(int num,int miles[]);
main(){
    int num;
    int result ;
    cout << "Enter the number of Saturdays: ";
    cin >> num ;
     int miles[num];
  for (int i = 0; i < num; i++) {
    cout << "Enter miles run for Saturday " << i + 1 << ": ";
    cin >> miles[i];
  }
  result = progress(num,miles);
    cout << "Total progress days: " << result ;
}

int progress(int num,int miles[]){
    int pro=0;
    for (int i=0; i <num; i++){
        if(miles[i]>miles[i-1]){
            pro++ ;
        }
    }
    return pro ;
}
