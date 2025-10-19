#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

bool isTriangle(ll a, ll b, ll c)
{
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
        return true;
    else
        return false;
}

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (isTriangle(a, b, c))
    {
        cout << "Yes" << endl;
        if (a == b && b == c)
            cout << "Equilateral" << endl;
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
            cout << "Right" << endl;
        else if (a == b || a == c || b == c)
            cout << "Isosceles" << endl;
        else
            cout << "Scalene" << endl;
    }
    else
        cout << "No" << endl;
    return 0;
}
