#include <iostream>
using namespace std;
void checkAlphabetCase(char c);

int main() {
    char c;
    cout << "Enter a character (A/a): ";
    cin >> c;
    checkAlphabetCase(c);
}

void checkAlphabetCase(char c)
{
    if (c >= 'A' && c <= 'Z')
 {
        cout << "You have entered Capital " << c << endl;
    }
    if (c >= 'a' && c <= 'z') 
{
        cout << "You have entered small " << c << endl;
    }
 
}


