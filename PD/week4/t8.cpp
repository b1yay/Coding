#include <iostream>
using namespace std;
void pet(int holidays);

int main() {
    int holidays;
    cout << "Holidays: ";
    cin >> holidays;
    pet(holidays);
}
void pet(int holidays) {
    int workingDays = 365 - holidays;
    int gamesTime = workingDays * 63 + holidays * 127;
    int normTime = 30000;
    int difference;
    int hours;
    int minutes;
    if (gamesTime <= normTime) {
        cout << "Tom sleeps well" << endl;
        difference = normTime-gamesTime;
        hours = difference / 60;
        minutes = difference % 60;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    } 
        if (gamesTime>=normTime){
        cout << "Tom will run away" << endl;
        difference=gamesTime-normTime ;
        hours = difference / 60;
        minutes = difference % 60;
        cout << hours << " hours and " << minutes << " minutes for play" << endl;
    }
}