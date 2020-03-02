#include <iostream>

using namespace std;

int main()
{
  int m;
    int n;
    int k;
    cout << "Skolko shihek:";
    cin >> n;
    cout << "Skolko orehov:";
    cin >> m;
    cout << "Skolko nuzhno orehov:";
    cin >> k;
    if (m * n > k)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
