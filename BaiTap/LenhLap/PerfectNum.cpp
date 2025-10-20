#include <iostream>
using namespace std;

bool perfectNum(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    if (perfectNum(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}