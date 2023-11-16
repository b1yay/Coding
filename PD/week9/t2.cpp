#include <iostream>
using namespace std;
string containsSeven(int numbers[], int size);

int main() {
  int size;
  cout << "Enter the size of Array: ";
  cin >> size;

  int numbers[size];
  for (int i = 0; i < size; i++) {
    cout << "Enter Element " << i + 1 << ": ";
    cin >> numbers[i];
  }

  string result = containsSeven(numbers, size);
  cout << result << endl;

}
string containsSeven(int numbers[], int size) {
  for (int i = 0; i < size; i++) {
    int num = numbers[i];
    while (num > 0) {
      if (num % 10 == 7) {
        return "Boom!";
      }
      num /= 10;
    }
  }
  return "there is no 7 in the array";
}
