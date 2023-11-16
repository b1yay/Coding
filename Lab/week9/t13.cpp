#include<iostream>
using namespace std;
void jazzifyChords(string chords[], int num);
main(){
    int num;
    cout<<"Enter the number of chords: ";
    cin>>num;
    string chords[num];
    cout<<"Enter "<<num<<" chords, one per line:"<<endl;
    for(int i = 0; i < num; i++)
    {
        cin>>chords[i];
    }
    jazzifyChords(chords,num);
}
void jazzifyChords(string chords[], int num)
{
 for (int i = 0; i < num; i++) {
    int k = chords[i].length();
    if(chords[i][k-1]!='7')
    {chords[i]=chords[i]+'7';}
 }
  cout<<"The array is ";

}