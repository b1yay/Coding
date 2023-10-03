#include <iostream>
using namespace std;
void possibleBonus(int Position1, int Position2);
int main() {
    int Position1,Position2;
    cout << "Enter your position: ";
    cin >> Position1;

    cout << "Enter your friend's position: ";
    cin >> Position2;
    possibleBonus(Position1,Position2);
}

void possibleBonus(int Position1, int Position2)
 {
    if (Position1 + 1 <= Position2 && Position1 + 6 >= Position2) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
