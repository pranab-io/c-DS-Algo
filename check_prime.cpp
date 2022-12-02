#include <iostream>
#include <cmath>
using namespace std;

void check_prime(int num)
{
    int counter = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not prime" << endl;
            exit(0);
        }
        else
        {
            continue;
        }
    }
    cout << "Prime" << endl;
}

void check_prime_enhanced(int num)
{
    int counter = 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "Not prime" << endl;
            exit(0);
        }
        else
        {
            continue;
        }
    }
    cout << "Prime" << endl;
}

int main()
{
    int number = 0;
    cout << "Enter any number : ";
    cin >> number;
    check_prime_enhanced(number);
    return 0;
}