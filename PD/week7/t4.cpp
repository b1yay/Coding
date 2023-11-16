#include <iostream>
using namespace std;
int triangle(int num);

int main() {
  int num,result;
  cout << "Enter number of Triangle: " ;
  cin >> num ;
  result = triangle(num);
  cout << "Dots in the Triangle: " << result << endl;

}
int triangle(int num) {
  // The number of dots in the nth triangle number is equal to the sum of the first n natural numbers.
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    sum += i;
  }
  return sum;
}

