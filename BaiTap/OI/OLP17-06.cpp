#include <iostream>
#define ll long long
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;
    long long m = min(A, B);
    long long fact = 1;
    for (long long i = 2; i <= m; ++i)
        fact *= i;
    cout << fact << '\n';
    return 0;
}