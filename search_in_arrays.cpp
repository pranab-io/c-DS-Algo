#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// elements must be sorted before applying binary search
int binary_search(int arr[], int n, int key)
{
    int start = 0; // starting index
    int end = n;   // ending index

    // we will run the loop till start <= end
    // if start exceeds end then return -1
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array --> ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search : ";
    int key;
    cin >> key;

    // for linear search uncomment next line and comment binary search
    // int index = linear_search(arr, n, key);

    // for binary search uncomment next line
    int index = binary_search(arr, n, key);
    if (index == -1)
    {
        cout << "Item not found.." << endl;
    }
    else
    {
        cout << "item found on " << index << " th index." << endl;
    }
    return 0;
}