#include <iostream>

using namespace std;

int main()
{
    int stars;
    cout << "Vvedite razmer kvadrata iz zvozdochek: ";
    cin >> stars;

    for (int columns = 0; columns < stars; columns++)
    {
        for (int rows = 0; rows < stars; rows++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
