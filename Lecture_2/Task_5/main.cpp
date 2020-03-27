#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cout << "Vvedite vysotu yelki: ";
    cin >> size;
    
    for (int lineNum = 1; lineNum <= size; lineNum++)
    {
        for (int actualSpace = 0; actualSpace < size - lineNum; actualSpace++)
            cout << " ";
        for (int actualStart = 0; actualStart < lineNum * 2 - 1; actualStart++)
            cout << "*";
        cout << endl;
    }
    for (int spaseAmount = 1; spaseAmount < size; spaseAmount++)
        cout << " ";
    cout << "*";
}
