#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float sum1(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
float sum2(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i / (i + 1.0);
    }
    return sum;
}
float sum3(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
float sum4(int n)
{
    float sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += (pow(2, i)) / (i + 1.0);
    }
    return sum;
}
float sum5(int n)
{
    float sum;
    float s1 = 0;
    float s2 = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 != 0)
            s1 -= (double)((i - 1) * i) / (2 * i - 1);
        else
            s2 += (double)((i - 1) * i) / (2 * i - 1);
    }
    sum = s1 + s2;
    return sum;
}
int main()
{
    int n, k;
    cin >> n >> k;
    float sum;
    switch (k)
    {
    case 1:
        sum = sum1(n);
        break;
    case 2:
        sum = sum2(n);
        break;
    case 3:
        sum = sum3(n);
        break;
    case 4:
        sum = sum4(n);
        break;
    case 5:
        sum = sum5(n);
        break;
    default:
        break;
    }
    cout << setprecision(2) << fixed << sum << endl;
    return 0;
}