#include <iostream>
using namespace std;

int32_t addBinary(int a, int b)
{
    int ans = 0;
    int prevCarry = 0;

    // traverse till any of them will get empty
    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }
        else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
        {
            if (prevCarry == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }

        // update a and b after every iteration
        a /= 10;
        b /= 10;
    }

    // if after the loop one number finishes first than the other
    // or one number is shorter than other
    while (a > 0)
    {
        if (prevCarry == 1)
        {
            ans = ans * 10 + 0;
            prevCarry = 1;
        }
        else
        {
            ans = ans * 10 + 1;
            prevCarry = 0;
        }
    }

    int32_t main()
    {
        int a, b;
        cout << "Enter 1st binary number : ";
        cin >> a;
        cout << "Enter 2nd binary number : ";
        cin >> b;
        return 0;
    }