// this code will find all the prime number between two numbers

#include <iostream>
#include <cmath>
using namespace std;

void find_all_primes(int num1, int num2)
{
    int flag = 1;
    for (int i = num1; i <= num2; i++) // iterate for numbers between num1 and num2
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int start_number, end_number;
    cout << "Enter start number : ";
    cin >> start_number;
    cout << "Enter end number : ";
    cin >> end_number;

    find_all_primes(start_number, end_number);
    return 0;
}