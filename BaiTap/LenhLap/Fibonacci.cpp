#include <iostream>
using namespace std;

void fibo(int n)
{
    long long fn1 = 1;
    long long fn2 = 0;
    for (int i = 1; i < n; i++)
    {
        long long fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
    }
    cout << fn1;
}

int main()
{
    int n;
    cin >> n;
    fibo(n);
    return 0;
}