#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "character is : ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "UpperCase";
    }
    else
    {
        cout << "LowerCase";
    }

    return 0;
}