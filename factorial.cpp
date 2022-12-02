#include <iostream>
using namespace std;

int fact(int num)
{
    int res = 1; // result
    while (num > 1)
    {
        res *= num;
        num--;
    }
    return res;
}

int main()
{
    int num;
    cout << "Enter the number whose factorial you want to find out : ";
    cin >> num;
    cout << "The factorial of " << num << " is : " << fact(num) << endl;
    return 0;
}