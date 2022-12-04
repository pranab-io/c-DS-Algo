#include <iostream>
using namespace std;

int main()
{
    // user input code
    int n;
    int sum = 0;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "sum of all sub arrays respectively : " << endl;

    // logic
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            cout << sum << endl;
        }
    }

    return 0;
}