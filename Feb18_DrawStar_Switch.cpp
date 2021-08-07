#include "std_lib_facilities.h"

void starLeftTriangle(int n);
void starRightTriangle(int n);

int main()
{
    char choice;
    int star;

    while (true)
    {
        cout << "Please enter if you want to draw (L)eft triangle or (R)ight triangle or (Q)uit: \n";
        cin >> choice;

        switch (choice)
        {
        case 'L':
        case 'l':
            cout << "Input the number of starts you want to draw: \n";
            cin >> star;
            starLeftTriangle(star);
            break;

        case 'R':
        case 'r':
            cout << "Input the number of starts you want to draw: \n";
            cin >> star;
            starRightTriangle(star);
            break;

        case 'Q':
        case 'q':
            return 0; // Quit the program

        default:
            cout << "Wrong choice, try again!" << endl;
        }
    }

    return 0;
}

void starLeftTriangle(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

}

void starRightTriangle(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n - i)
                cout << ' '; // insert space
            else
                cout << '*'; // insert star
        }
        cout << endl;
    }

}