#include <iostream>
using namespace std;

bool namNhuan(int n)
{
    if (n > 0)
    {
        if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
            return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    if (!namNhuan(n))
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;
}