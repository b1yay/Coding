#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float horizontalDistance, angleOfElevation, height,angleInRadians;

    cout << "Enter the distance from the base of the tree (in feet): ";
    cin >> horizontalDistance;
    cout << "Enter the angle of elevation (in degrees): ";
    cin >> angleOfElevation;
    angleInRadians = angleOfElevation/57.2958;
    height = horizontalDistance * tan(angleInRadians);
    cout << "The height of the tree is: " << height << " feet" << endl;

}
