#include <iostream>
using namespace std; 
string  decideActivity(string temp, string humidity) ;
main() {
string temp,humidity,result ;
cout << "Enter temperature (warm or cold): " ;
cin >> temp ;
cout << "Enter humidity (dry or humid): " ;
cin >> humidity ;
result = decideActivity(temp, humidity) ;
cout << "Recommended activity: " << result ;
}
string  decideActivity(string temp, string humidity){

if(temp == "warm" && humidity == "dry"){
    return "Play tennis" ;
}
else if (temp == "warm" && humidity == "humid"){
    return "Swim" ;
}
else if(temp == "cold" && humidity == "dry"){
    return "Play basketball" ;
}
else if(temp == "cold" && humidity == "humid"){
    return "Watch tv" ;
}
return "";
}