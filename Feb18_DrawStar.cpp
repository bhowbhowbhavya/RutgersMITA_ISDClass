#include "std_lib_facilities.h"

// function declaration
void starLeftTriangle(int n);
void starRightTriangle(int n);

// main function
int main()
{
    char choice;
    int star;

    while (true)
    {
        cout << "Please enter if you want to draw (L)eft triangle or (R)ight triangle or (Q)uit: \n";
        cin >> choice;

        if (choice == 'l' || choice == 'L')
        {
            cout << "Input the number of starts you want to draw: \n";
            cin >> star;
            starLeftTriangle(star);
        }
        else if (choice == 'r' || choice == 'R')
        {
            cout << "Input the number of starts you want to draw: \n";
            cin >> star;
            starRightTriangle(star);
        }
        else if (choice == 'q' || choice == 'Q')
        {
            return 0; // Quit the program
        }
        else {
            cout << "Wrong choice, try again!" << endl;
        }
    }

    return 0;
}

// function definition
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
            if (j <= n-i)
                cout << ' '; // insert space
            else
                cout << '*'; // insert star
        }
        cout << endl;
    }

}
