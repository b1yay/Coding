#include<iostream>
using namespace std ;
void reverse(string word);
main(){
    string word,result;
    cout << "Enter a string: ";
    cin >> word;
    reverse( word);
}
void reverse(string word){
    cout << "Reversed String: " ;
for(int i = word.size() ; i>= 0; i-- ){
cout << word[i];
}
}