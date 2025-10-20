#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}