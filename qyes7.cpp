#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2, c;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    c = a;
    a = b;
    b = c;

    cout << "After swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
