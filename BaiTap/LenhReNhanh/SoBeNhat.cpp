#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min;
    if (a < b && a < c && a < d)
    {
        min = a;
    }
    else if (b < a && b < c && b < d)
    {
        min = b;
    }
    else if (c < b && c < a && c < d)
    {
        min = c;
    }
    else
        min = d;
    cout << min;
    return 0;
}