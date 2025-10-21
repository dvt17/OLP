#include <iostream>
#include <string>
#include <bitset>
using namespace std;

void binary(int n)
{
    int total = 1 << n; // tong so chuoi = 2^n
    for (int i = 0; i < total; i++)
    {
        bitset<10> bits(i);                              // chuyển i sang nhị phân
        cout << bits.to_string().substr(10 - n) << "\n"; // chỉ lấy n ký tự cuối
    }
}

int main()
{
    int n;
    cin >> n;
    binary(n);
    return 0;
}