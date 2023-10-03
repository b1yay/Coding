#include <iostream>
#include <string>
using namespace std;
string checkOddishOrEvenish();
float sum (float number) ;
float number;
main() {
    cout << "Enter a five-digit number: ";
    cin >> number;
    float result= sum (number) ;
    string resultString=checkOddishOrEvenish;
    cout << "The number is " resultString;
    }
float sum (float number) {
          float a,b,c,d,e,f,g,h,sum;
          a=number / 10000;
          b=number % 10000;
          c=b / 1000;
          d=b % 1000;          
          e=d / 100;
          f=d % 100;
          g=f / 10;
          h=f % 10;
          sum=a+c+e+g+h;
          return sum;
}

string checkOddishOrEvenish(float sum)  
{
    if (sum % 2 == 0) {
        return "Evenish";
    } else {
        return "Oddish";
    }
}

