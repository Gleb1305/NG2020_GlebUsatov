#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Vvedite chislo:";
    cin >> a;
    cout << "Vvedite chislo:";
    cin >> b;
    cout << "Vvedite chislo:";
    cin >> c;
    int d = b * b - 4 * a * c;
    int x1 = (-1 * b + double(b * b - 4 * a * c)) / 2 * a;
    int x2 = (-1 * b - double(b * b - 4 * a * c)) / 2 * a;
    if (d > 0)
    {
        cout << "x1= ";
        cout << x1;
        cout << endl;
        cout << "x2= ";
        cout << x2;
        cout << endl;
    }
    if (d == 0)
    {
        cout << "x1=";
        cout << x1;
        cout << endl;
    }
    if (d < 0)
    {
        cout << "Korney net";
    }
}
