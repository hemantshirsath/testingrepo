#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}