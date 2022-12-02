#include <iostream>
using namespace std;

// this program will print n term of fibonacci sequence from starting.
void fib(int n)
{
    int t1 = 0;
    int t2 = 1;

    int nextTerm;

    for (int i = 0; i < n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int num;
    cout << "how many elements of the sequence you want to see : ";
    cin >> num;
    fib(num);
    return 0;
}