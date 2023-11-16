#include <iostream>
using namespace std;
bool areAllElementsIdentical(string array[], int size) ;

int main() {
  int size;
  cout << "Enter the size of Array: ";
  cin >> size;

  string array[size];
  for (int i = 0; i < size; i++) {
    cout << "Enter Element " << i + 1 << ": ";
    cin >> array[i];
  }

  bool result = areAllElementsIdentical(array, size);
  if (result) {
    cout << "1" << endl;
  } else {
    cout << "0" << endl;
  }
}
bool areAllElementsIdentical(string array[], int size) {
  for (int i = 1; i < size; i++) {
    if (array[0] != array[i]) {
      return false;
    }
  }
  return true;
}
