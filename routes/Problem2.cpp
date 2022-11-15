#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number:";
    int n;
    cin >> n;
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = (n / 2) + 1; i < n; i++)
    {
        for (int j = (n / 2) + 1; j <= n; j++)
        {
            if (j > i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}