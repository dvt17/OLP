#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int gcd1(int a, int c)
{
    if (c == 0)
        return a;
    else
        return gcd(a, c);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << gcd1(gcd(a, b), c) << endl;

    return 0;
}