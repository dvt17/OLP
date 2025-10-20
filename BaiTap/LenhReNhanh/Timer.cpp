#include <iostream>
using namespace std;

int lastMinute(int d, int h, int m)
{
    int day = (d - 11) * 24 * 60;
    int hour = (h - 11) * 60;
    int minute = m - 11;
    int sumMinutes;
    if (day < 0 || day == 0 && hour < 0 || day == 0 && hour == 0 && minute < 0)
    {
        sumMinutes = -1;
    }
    else
        sumMinutes = day + hour + minute;
    return sumMinutes;
}

int main()
{
    int D, H, M;
    cin >> D >> H >> M;
    cout << lastMinute(D, H, M);
    return 0;
}