#include<iostream>
using namespace std;
string reverse (string word);
main(){
   string word;
   cout << "Enter a String: ";
   cin >> word ;
    cout<<"Shifted String: "<< reverse(word);
}

string reverse (string word){
 for (int i = 0; i < word.length(); i++) {
    char c = word[i];
    if (c >= 'a' && c < 'z' || c >= 'A' && c < 'Z') {
      c++;
    } else if (c == 'z') {
      c = 'a';
    } else if (c == 'Z') {
      c = 'A';
    }
    word[i] = c;
  }
  return word;   
}
