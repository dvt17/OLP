#include <iostream>
#include <iomanip>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    float x1, x2;
    ll delta = (b * b) - 4 * a * c;
    if (a != 0)
    {
        if (delta == 0)
        {
            x1 = x2 = -b / (2 * a);
            cout << x1 << endl;
        }
        else if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << setprecision(2) << fixed << x1 << " " << x2 << endl;
        }
        else
            cout << "EMPTY" << endl;
    }
    else
        cout << " INF" << endl;
    return 0;
}