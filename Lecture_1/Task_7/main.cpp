#include <iostream>

using namespace std;

int main()
{
    int a;
cout << "Vvedite vashu zarplatu: ";
    cin >> a;
    if (a>1000 and a>1000000) {
        cout << "Ti milioner";
    }
    if (a > 1000 and a< 1000000) {
cout << "Horosho";
    }
    if (a<1000) {
cout << "Rabotai bolshe";
    }
cout << endl;
    cout << "...no ti molodec";
}
