#include <iostream>
#include <string>
using namespace std;
void convertPINToDance(string pin);

// A list of dance moves.
const string DANCE_MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

int main() {
  // Get the PIN number from the user.
  string pin;
  cout << "Enter your PIN (4 digits): ";
  cin >> pin;

  // Convert the PIN number to its dance equivalent.
  convertPINToDance(pin);

}
// Converts a PIN number to its dance equivalent.
void convertPINToDance(string pin) {
  // Check if the PIN number is valid.
  if ( pin.length() != 4 || !isdigit(pin[0]) || !isdigit(pin[1]) || !isdigit(pin[2]) || !isdigit(pin[3] )) {
    cout << "Invalid input." << endl;
    return;
  }

  // Convert each digit in the PIN number to its dance equivalent.
  for (int i = 0; i < 4; i++) {
    int digit = pin[i] - '0';
    int dance_move_index = digit + i;

    // Cycle to the beginning of the dance list if the index is greater than the last index value.
    if (dance_move_index >= 10) {
      dance_move_index -= 10;
    }

    // Print the dance move.
    cout << DANCE_MOVES[dance_move_index] ;
    if (i<3){
    cout << ", ";
    }
  }

  // Print a newline character at the end.
  cout << endl;
}
