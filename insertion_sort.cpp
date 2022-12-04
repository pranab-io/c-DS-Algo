#include <iostream>
using namespace std;
// logic : insert an element from unsorted array to its correct position in sorted array
int main()
{
    int n, current_element, j;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "sorting started....." << endl;

    // Logic
    // for loop will start from 1 cause we assume the first element is in sorted array
    for (int i = 1; i < n; i++)
    {
        current_element = arr[i];
        j = i - 1;
        while (arr[j] > current_element && j >= 0)
        {
            arr[j + 1] = arr[j]; // shift one position to right
            j--;                 // update j to compare it to current
        }

        // when loop ends it will update j to one step less than required so
        arr[j + 1] = current_element;
    }

    // displaying the sorted array
    cout << "sorted array is .................." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}