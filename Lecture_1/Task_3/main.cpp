#include <iostream>

using namespace std;

int main()
{
    int salary1;
    int salary2;
    int salary3;
    cout << "Vvedite zarplatu:";
    cin >> salary1;
    cout << "Vvedite zarplatu:";
    cin >> salary2;
    cout << "Vvedite zarplatu:";
    cin >> salary3;
    if (salary1 > salary3 and salary2 > salary3 and salary1 > salary2)
    {
        cout << salary1 - salary3;
    }
    if (salary1 > salary3 and salary2 > salary3 and salary2 > salary1)
    {
        cout << salary2 - salary3;
    }
    if (salary2 > salary3 and salary3 > salary1 and salary2 > salary3)
    {
        cout << salary2 - salary1;
    }
    if (salary1 > salary2 and salary3 > salary2 and salary1 > salary2)
    {
        cout << salary1 - salary2;
    }
    if (salary3 > salary2 and salary1 > salary2 and salary3 > salary1)
    {
        cout << salary3 - salary2;
    }
    if (salary3 > salary1 and salary2 > salary1 and salary3 > salary2)
    {
        cout << salary3 - salary1;
    }
}
