#include <iostream>
using namespace std;
bool isPrime(int number);

int main() {
  int num, result;
  cout << "Enter Number: ";
  cin >> num ;
  result = isPrime(num);
cout << result ;
}
bool isPrime(int num) {
  
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}