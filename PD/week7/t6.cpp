#include <iostream>
using namespace std;
int primorial(int n);
bool isPrime(int number);

int main() {
  int num,result;
  cout << "Enter Number: " ;
  cin >> num ;
  result = primorial(num);
  cout << primorial(num) ;

}
int primorial(int num) {
  int product = 1;
  int count = 0 ; 
  for (int i = 1; count <= num; i++) {
    if (isPrime(i)) {
      product *= i;
      count++ ;
    }
  }
  return product;
}

bool isPrime(int num) {
    if(num==2 || num==3){
        return true;
    }
   else if(num!=2 && num!=3 ){
        if(num%2==0 || num%3==0){
            return false;
        }
        else{
            return true;
        }
    }}
