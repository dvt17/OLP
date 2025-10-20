#include <iostream>
#include <cmath>
using namespace std;

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

void printsnt(int n)
{
    int prime;
    for (int i = 1; i < n; i++)
    {
        if (snt(i))
        {
            prime = i;
            cout << prime << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    printsnt(n);
    return 0;
}