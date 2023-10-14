#include <iostream>
using namespace std;
bool check(int number);
main()
{
    int number, f;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    f = check(number);
    cout << f;
}
bool check(int number)
{
    int a, b, c, d, e, g, h;
    a = number / 100;
    b =  number % 100;
    c = b / 10;
    d = b%10;
    e = a + c + d;
    g = e % 2;
    h = number % 2;
    
    if (g == 0 && h == 0)
    {
        return true;
    }
    else if (e % 2 != 0 && number % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
