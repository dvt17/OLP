#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
bool soLe(int a)
{
    if (a % 2 != 0)
        return true;
    return false;
}
bool uoc(int a)
{
    if (2016 % a == 0)
        return true;
    return false;
}
bool squareNum(int a)
{
    int can = sqrt(a);
    if (can * can == a)
        return true;
    return false;
}
bool snt(int a)
{
    if (a < 2)
        return false;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;

    switch (k)
    {
    case 1:
        for (int i = 0; i < n; i++)
            if (soLe(a[i]))
                dem++;

        cout << dem;
        break;
    case 2:
        for (int i = 0; i < n; i++)
            if (uoc(a[i]))
                dem++;

        cout << dem;
        break;
    case 3:
        for (int i = 0; i < n; i++)
            if (squareNum(a[i]))
                dem++;

        cout << dem;
        break;
    case 4:
        for (int i = 0; i < n; i++)
            if (snt(a[i]))
                dem++;

        cout << dem;
        break;
    case 5:
        sort(a, a + n);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        break;
    }
    return 0;
}