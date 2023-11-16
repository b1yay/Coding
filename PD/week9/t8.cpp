#include <iostream>
#include <string>

using namespace std;

// Finds the broken keys in a string, given the correct phrase and what was actually typed.
string findBrokenKeys(string correctPhrase, string actualTyped) {
  // Initialize the string to store the broken keys.
  string brokenKeys = "";

  // Iterate over the correct phrase and compare it to the actual typed string.
  for (int i = 0; i < correctPhrase.length(); i++) {
    // If the current character in the correct phrase is different from the current character in the actual typed string, then add it to the broken keys string.
    if (correctPhrase[i] != actualTyped[i] && !brokenKeys.contains(actualTyped[i])) {
      brokenKeys += actualTyped[i];
    }
  }

  // Return the broken keys string.
  return brokenKeys;
}

int main() {
  // Get the correct phrase and actual typed string from the user.
  string correctPhrase;
  string actualTyped;

  cout << "Enter the correct phrase: ";
  cin >> correctPhrase;

  cout << "Enter what you actually typed: ";
  cin >> actualTyped;

  // Find the broken keys.
  string brokenKeys = findBrokenKeys(correctPhrase, actualTyped);

  // Print the broken keys to the console.
  if (brokenKeys.empty()) {
    cout << "No broken keys." << endl;
  } else {
    cout << "Broken keys: " << brokenKeys << endl;
  }

  return 0;
}
