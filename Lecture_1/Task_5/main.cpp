#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Kal'kulyator kvadratnykh uravneniy";
    cout << endl;
    cout << "Vvedite chislo:";
    cin >> a;
    cout << "Vvedite chislo:";
    cin >> b;
    cout << "Vvedite chislo:";
    cin >> c;
    int discriminant = b * b - 4 * a * c;  // formula diskriminant
    int x1 = (-1 * b + double(b * b - 4 * a * c)) / 2 * a;
    int x2 = (-1 * b - double(b * b - 4 * a * c)) / 2 * a;
    if (discriminant > 0)
    {
        cout << "x1= ";  //1 koren'
        cout << x1;
        cout << endl;
        cout << "x2= ";  //2 koren'
        cout << x2;
        cout << endl;
    }
    if (discriminant == 0)
    {
        cout << "x1=";
        cout << x1;
        cout << endl;
    }
    if (discriminant < 0)
    {
        cout << "Korney net";
    }
}
