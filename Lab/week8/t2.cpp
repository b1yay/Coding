#include <iostream>
using namespace std ;
float calculateDamage( string ptype, string etype, float ppower, float epower);
main(){
    float ppower,epower,result ;
    string ptype,etype ;
    cout << "Enter your type: " ;
    cin >> ptype ;
    cout << "Enter enemy type: " ;
    cin >> etype ;
    cout << "Enter your power: " ;
    cin >> ppower ;
    cout << "Enter enemy defense: " ;
    cin >> epower ;
    result = calculateDamage( ptype, etype, ppower,epower) ;
    cout << result ;

}
float calculateDamage( string ptype, string etype, float ppower, float epower){
float damage,effectiveness ;

    if (ptype == etype) {
        effectiveness = 0.5; // Not very effective against the same type
    } else if ((ptype == "fire" && etype == "grass")) {
        effectiveness = 2; // Super effective matchups
    } else if ((ptype == "fire" && etype == "water") ||
               (ptype == "water" && etype == "grass") || ptype == "grass" && etype == "fire" ||
               (ptype == "water" && etype == "electric")) {
        effectiveness = 0.5; // Not very effective matchups
    } else {
        effectiveness = 1; // Neutral matchups
    }

    damage = 50 * (ppower / epower) * effectiveness;
    return damage;
}


