#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Vvedite zarplatu:";
    cin >> a;
    cout << "Vvedite zarplatu:";
    cin >> b;
    cout << "Vvedite zarplatu:";
    cin >> c;
    if (a > c and b > c and a > b)
    {
        cout << a - b;
    }
    if (a > c and b > c and b > a)
    {
        cout << b - a;
    }
    if (a > c and c > b and a > c)
    {
        cout << a - c;
    }
    if (a > b and c > b and c > a)
    {
        cout << c - a;
    }
    if (c > a and b > a and c > b)
    {
        cout << c - b;
    }
    if (c > a and b > a and b > c)
    {
        cout << b - c;
    }
}
