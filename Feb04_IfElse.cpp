#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Hi, Enter x value: ";
    cin >> x;

    cout << "\nHi, Enter y value: ";
    cin >> y;

    if (x > y) {
        cout << "\n x is greater than y\n";
    }
    else if (x < y) {
        cout << "\nx is less than y\n";
    }
    else {
        cout << "\nx is equals to y\n";
    }
}
