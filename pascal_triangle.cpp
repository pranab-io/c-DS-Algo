// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include <iostream>
using namespace std;

// we will need factorial for that
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
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        for (int j = 0; j <= i; j++)
        {
            cout << (fact(i)) / (fact(i - j) * fact(j)) << " ";
        }
    }

    return 0;
}