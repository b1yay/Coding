#include <iostream>
#include <string>
using namespace std;
string Title(int age, char gender);

int main() {
    int age;
    char gender;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;

    string title = Title(age, gender);
    cout << "Your personal title is:  " << title <<  endl;
    
    return 0;
}
string Title(int age, char gender) {
    if (gender == 'm') {
        if (age >= 16) {
            return "Mr.";
        } else {
            return "Master";
        }
    } else if (gender == 'f') {
        if (age >= 16) {
            return "Ms.";
        } else {
            return "Miss";
        }
    } else {
        return "Invalid Gender";
    }
}