#include <iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);

int main() {
    int redRose, whiteRose, tulip;
    cout << "Red Rose: ";
    cin >> redRose;
    cout << "White Rose: ";
    cin >> whiteRose;
    cout << "Tulips: ";
    cin >> tulip;
    flowerShop(redRose, whiteRose, tulip);
   
}
void flowerShop(int redRose, int whiteRose, int tulip)
 {
    float redRosePrice = 2.00 * redRose;
    float whiteRosePrice = 4.10 * whiteRose;
    float tulipPrice = 2.50 * tulip;
    float totalPrice ;
    float discount;
    float discountedPrice;
    totalPrice=redRosePrice + whiteRosePrice + tulipPrice;
     cout << "Original Price: $" << totalPrice << endl;
    if (totalPrice > 200) {
        discount = totalPrice * 0.20;
        discountedPrice = totalPrice - discount;
        cout << "Price after Discount: $" << discountedPrice << endl;
    } 
    if (totalPrice < 200) {
        cout << "No discount applied." ;
}
}
