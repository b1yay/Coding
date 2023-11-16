#include <iostream>
#include <string>
using namespace std ;
bool isLengthEven(string word);

int main() {
    string word;
    cout << "Enter a String: ";
    cin >> word;
    bool result = isLengthEven(word);
    cout << result ;
}
bool isLengthEven(string word) {
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }
    if (length%2==0){
        return true ;
    }
    if(length%2 != 0) {
        return false ;
    }
}