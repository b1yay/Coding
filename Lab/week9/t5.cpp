#include <iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int number); 
int main() {
  int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int unique = 0; // Count for unique numbers

    cout << "Enter " << n << " numbers, one per line:"<<endl;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;

        if (!isAlreadyEntered(arr, unique, input))
        {
            arr[unique++] = input; 
        } 
        else
        {
            cout << "Already Entered: " << input << endl;
            i; 
        }
    }
    cout<<"Unique numbers entered: ";
    for (int i = 0; i < unique; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
bool isAlreadyEntered(int arr[], int size, int number) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == number) {
      return true;
    }
  }

  return false;
}
