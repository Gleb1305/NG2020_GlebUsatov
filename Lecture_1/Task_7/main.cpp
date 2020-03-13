#include <iostream>

using namespace std;

int main()
{
    int salary;
    cout << "Vvedite vashu zarplatu: ";
    cin >> salary;
    if (salary > 1000 and salary > 1000000)
    {
        cout << "Ti milioner";
    }
    if (salary > 1000 and salary < 1000000)
    {
        cout << "Horosho";
    }
    if (salary < 1000)
    {
        cout << "Rabotai bolshe";
    }
    cout << endl;
    cout << "...no ti molodec";
}
