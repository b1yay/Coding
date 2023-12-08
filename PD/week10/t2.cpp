#include <iostream>
using namespace std;
int count(int size, string words[], char letter);
main()
{
    int size;
    int result;
    cout << "Enter how many words you want to enter: ";
    cin >> size;
    string words[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> words[i];
    }
    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    result = count(size, words, letter);
    cout << letter << " shows up " << result << " times in the data.";
}
int count(int size, string words[], char letter)
{
    int times = 0;
    for (int i = 0; i < size; i++)
    {
        string a = words[i];
        for (int y = 0; y < a.length(); y++)
        {
            if (a[y] == letter)
            {
                times++;
            }
        }
    }
    return times;
}
