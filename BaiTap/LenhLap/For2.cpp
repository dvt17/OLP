#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void uoc1(int n)
{
    int u;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            u = i;
            cout << u << " ";
        }
    }
}

void uoc2(int n)
{
    int u = 0;
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            u = i;
            cout << u << " ";
        }
    }
}

void uoc3(int n)
{
    int u = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && 2016 % i == 0)
        {
            u = i;
            cout << u << " ";
        }
    }
}

bool squareNum(int n)
{
    for (int i = 0; i * i <= n; i++)
    {
        if (i * i == n)
            return true;
    }
    return false;
}

bool snt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    int n, k;
    cin >> n >> k;
    switch (k)
    {
    case 1:
        uoc1(n);
        break;
    case 2:
        uoc2(n);
        break;
    case 3:
        uoc3(n);
        break;
    case 4:
        if (squareNum(n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        break;
    case 5:
        if (snt(n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        break;
    default:
        break;
    }
    return 0;
}