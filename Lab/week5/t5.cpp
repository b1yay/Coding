#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    float discriminant, root1, root2,real,imaginary;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
 {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Solutions: x= " << root1 << " and x = " << root2 << endl;
    } 
     if (discriminant == 0)
 {
        root1 = -b / (2 * a);
        cout << "Solution: x = " << root1 << endl;
    } 
      if (discriminant < 0)
 {
        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        cout << "Complex Solutions: x = " << real << " + " << imaginary << "i and x = "<< real << " - " << imaginary << "i" << endl;
    }
}
