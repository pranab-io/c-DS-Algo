#include <iostream>
#include <cmath>
using namespace std;

// first store the max among three number to a max variable
// then square and add other two and compare it to the square of the max.
// if they are equal return True

int main()
{
    int x, y, z;
    int MAX, other_sum; // other sum holds the squaring and adding other two umbers

    cout << "enter the value of first number : ";
    cin >> x;

    cout << "enter the value of second number : ";
    cin >> y;

    cout << "enter the value of third number : ";
    cin >> z;

    // finding the MAX number
    if (x >= y)
    {
        if (x >= z)
        {
            MAX = x;
        }
        else
        {
            MAX = z;
        }
    }
    else
    {
        if (y >= z)
        {
            MAX = y;
        }
        else
        {
            MAX = z;
        }
    }

    if (MAX == x)
    {
        if (pow(x, 2) == ((pow(y, 2)) + (pow(z, 2))))
        {
            cout << "pythagorean triplet !!" << endl;
        }
        else
        {
            cout << "Not an pythagorean triplet" << endl;
        }
    }
    else if (MAX == y)
    {
        if (pow(y, 2) == ((pow(x, 2)) + (pow(z, 2))))
        {
            cout << "pythagorean triplet !!" << endl;
        }
        else
        {
            cout << "Not an pythagorean triplet" << endl;
        }
    }
    else
    {

        if (pow(z, 2) == ((pow(y, 2)) + (pow(x, 2))))
        {
            cout << "pythagorean triplet !!" << endl;
        }
        else
        {
            cout << "Not an pythagorean triplet" << endl;
        }
    }

    return 0;
}