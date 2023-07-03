#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Write the number of the month" << endl;
    cin >> number;
    switch (number)

    {
    case 1:
    {
        cout << "Closed for work with the Health Insurance Fund" << endl;
        break;
    }
    case 3:
    case 18:
    {
        cout << "Prophylaxis is performed" << endl;
        break;
    }
    case 10:
    case 20:
    case 30:
    {
        cout << "Children's consultation day" << endl;
        break;
    }
    default:
    {
        cout << "Open for regular visits" << endl;
        break;
    }
    }
    return 0;