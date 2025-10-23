#include <iostream>
using namespace std;

void check(int h, int p, int s)
{

    if (p == 59 && s == 59)
    {
        h++;
        if (h > 23)
        {
            h = 0;
        }
        p = 0;
        s = 0;
    }
    else if (s == 59)
    {
        p++;
        s = 0;
    }
    else
        s++;
    cout << h << ' ' << p << ' ' << s;
}

int main()
{
    int h, p, s;
    cin >> h >> p >> s;
    check(h, p, s);
    return 0;
}