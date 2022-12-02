#include <iostream>
using namespace std;

int sum(int n)
{
    return (n * (n + 1)) / 2;
}
int main()
{
    cout << "Enter the value of n : ";
    int n;
    cin >> n;
    cout << "sum of n natural number with n=" << n << " is : " << sum(n) << endl;
    return 0;
}