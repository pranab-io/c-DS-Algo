#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void decimal_2_binary(int n)
{
    string res = "";
    int rem = 0;
    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        res += to_string(rem);
    }
    int len = res.length();
    int k = len;
    while (k--)
    {
        cout << res[k];
    }
}
string reverse(string s)
{
    string temp;
    int len = s.length();
    while (len--)
    {
        temp += s[len];
    }

    return temp;
}

void binary_2_decimal(string b)
{
    int n = 0;
    int len = b.length();
    int res = 0;
    string b_rev = reverse(b);

    for (int i = 0; i < len; i++)
    {
        int x;

        // conversion
        if (b_rev[i] == '1')
        {
            x = 1;
        }
        else
        {
            x = 0;
        }

        res = res + ((x)*pow(2, i));
    }
    cout << "result = " << res << endl;
}

int main()
{
    int p = 5668;
    // decimal_2_binary(p);
    string bin = "1111";
    binary_2_decimal(bin);
    return 0;
}