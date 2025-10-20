#include <iostream>
#include <cmath>
using namespace std;

bool checkNum(long long a)
{
    for (long long i = 0; i * i <= a; i++)
    {
        if (i * i == a)
            return true;
    }
    return false;
    /*long long check = sqrt(a);
    if (check * check == a || (check + 1) * (check + 1) == a)
        return true;
    else
        return false;*/
}

int main()
{
    long long a;
    cin >> a;
    if (checkNum(a))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}