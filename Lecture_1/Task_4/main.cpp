#include <iostream>

using namespace std;

int main()
{
    int numbA;
    int numbB;
    int numbC;
    cout << "vvedite pervoe chislo";
    cout << endl;
    cin >> numbA;
    cout << "vvedite vtoroe chislo";
    cout << endl;
    cin >> numbB;
    cout << "vvedite tretee chislo";
    cout << endl;
    cin >> c;
    if (numbC == 1)
    {
        cout << numbA + numbB;
    }
    if (numbC == 2)
    {
        cout << numbA - numbB;
    }
    if (numbC == 3)
    {
        cout << numbA * numbB;
    }
    if (numbC == 4)
    {
        cout << numbA / numbB;
    }
    if (numbC > 4)
    {
        cout << "eror";
    }
}
