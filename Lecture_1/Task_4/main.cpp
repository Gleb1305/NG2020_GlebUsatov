#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    cout << "Vvedite pervoe chislo: ";
    cin >> num1;
    cout << "Vvedite vtoroe chislo: ";
    cin >> num2;
    cout << "Vvedite tretee chislo: ";
    cin >> num3;
    if (num3 == 1)
    {
        cout << num1 + num2;
    }
    if (num3 == 2)
    {
        cout << num1 - num2;
    }
    if (num3 == 3)
    {
        cout << num1 * num2;
    }
    if (num3 == 4)
    {
        cout << num1 / num2;
    }
    if (num3 > 4)
    {
        cout << "eror";
    }
}
