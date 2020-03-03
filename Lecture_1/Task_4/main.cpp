#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "vvedite pervoe chislo";
    cout << endl;
    cin >> a;
    cout << "vvedite vtoroe chislo";
    cout << endl;
    cin >> b;
    cout << "vvedite tretee chislo";
    cout << endl;
    cin >> c;
    if (c == 1)
    {
        cout << a + b;
    }
    if (c == 2)
    {
        cout << a - b;
    }
    if (c == 3)
    {
        cout << a * b;
    }
    if (c == 4)
    {
        cout << a / b;
    }
    if (c > 4)
    {
        cout << "eror";
    }
}
