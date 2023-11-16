#include <iostream>
using namespace std;
int countCommonCharacters(string s1, string s2);

int main() {
  string s1, s2;

  cout << "Enter the first string: ";
  cin >> s1;
  cout << "Enter the second string: ";
  cin >> s2;

  int count = countCommonCharacters(s1, s2);
  cout << "Number of common characters: " << count << endl;
  
}
int countCommonCharacters(string s1, string s2) {
  int count = 0;
  int arr[256] = {0};

  for (char c : s1) {
    arr[c]++;
  }

  for (char c : s2) {
    if (arr[c] > 0) {
      count++;
      arr[c]--;
    }
  }

  return count;
}
