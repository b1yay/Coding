#include <iostream>
#include <string>
using namespace std;
string removeVowels(string str);

int main() {
  string input;
  cout << "Enter a string: ";
  cin >> input;

  string newStr = removeVowels(input);

  cout << "The string without vowels is: " << newStr << endl;

}
string removeVowels(string str) {
  string newStr = "";
  for (int i = 0; i < str.length(); i++) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
      newStr += str[i];
    }
  }
  return newStr;
}