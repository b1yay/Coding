#include <iostream>
#include <string>
using namespace std;
int coloringTime(string cols[], int size);

int main() {
  // Get the size of the array from the user.
  int size;
  cout << "Enter the size of Array: ";
  cin >> size;

  // Create an array to store the colors.
  string cols[size];

  // Get the colors from the user.
  for (int i = 0; i < size; i++) {
    cout << "Enter Element " << i + 1 << ": ";
    cin >> cols[i];
  }

  // Calculate the total coloring time.
  int time = coloringTime(cols, size);

  // Print the total coloring time.
  cout << "Time to color: " << time << " seconds" << endl;

}
int coloringTime(string cols[], int size) {
  // Initialize the total coloring time.
  int time = 0;

  // Iterate over the colors in the array.
  for (int i = 0; i < size; i++) {
    // If the current color is different from the previous color,
    // then add the switching time to the total coloring time.
    if (i > 0 && cols[i] != cols[i - 1]) {
      time += 1;
    }

    // Add the coloring time for the current color to the total coloring time.
    time += 2;
  }

  // Return the total coloring time.
  return time;
}

