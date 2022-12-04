#include <iostream>
using namespace std;
// algo : Repeatedly swap two adjacent elements if they are in wrong order.
int main()
{

    int n, temp = 0;
    int c = 1;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "sorting started....." << endl;

    // logic of Bubble Sort
    // at first round we have to swap for n-1 times
    // at second round for n-2 time

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - c; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        c++;
    }

    // displaying the sorted array
    cout << "sorted array is .................." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}