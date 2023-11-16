#include <iostream>
using namespace std ; 
void wordcheck(char word[]);
main(){
   char word[200];
   cout << "Enter a word: ";
   cin >> word;
  wordcheck(word);
}
void wordcheck(char word[]){
     for (int i = 0 ;  word[i]!= '\0' ; i++){
        if(word[i]){
    cout << word[i] << " found at position " << i << endl ;
    }
    }
}