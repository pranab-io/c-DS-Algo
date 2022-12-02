#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int number)
{
    int num = number;
    int current_digit = 0;
    int result = 0;

    while (num > 0)
    {
        current_digit = num % 10;
        result += pow(current_digit, 3);
        num = num / 10;
    }
    // cout << result; // for testing

    // check
    if (result == number)
    {
        cout << "armstrong number" << endl;
    }
    else
    {
        cout << "Not an armstrong number" << endl;
    }
}

int main()
{
    cout << "Enter a number : ";
    int number;
    cin >> number;
    armstrong(number);
    return 0;
}