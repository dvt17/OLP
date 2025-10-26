#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    if (n % 2 == 0)
    {
        sum = n / 2;
    }
    else
    {
        sum = -(n / 2 + 1);
    }
    cout << sum;
    return 0;
}