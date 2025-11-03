#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;

    int num = 0;
    ll tmp = n;

    while (tmp >= 10)
    {
        num++;
        tmp /= 10;
    }
    tmp++;
    for (int i = 0; i < num; i++)
    {
        tmp *= 10;
    }
    cout << tmp - n;
    return 0;
}