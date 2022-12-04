// an problem  on array
#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    // user input code

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mx = INT32_MIN; // to store max element up to previous index
    // INT32_MIN is the minimum value of int with 4 bytes
    // max_till_i logic
    for (int j = 0; j < n; j++)
    {
        mx = max(mx, arr[j]);
        cout << "Max till " << j << " is: " << mx << endl;
    }

    return 0;
}