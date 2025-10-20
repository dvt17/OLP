#include <iostream>
using namespace std;

int sumMedal(int s1, int s2, int s3)
{
    return s1 + s2 + s3;
}

bool compareColor(int m1, int m2, int m3, int n1, int n2, int n3)
{
    if (m1 > n1)
    {
        return true;
    }
    else if (m1 == n1)
    {
        if (m2 > n2)
            return true;
        else if (m2 == n2)
        {
            if (m3 > n3)
                return true;
        }
    }
    return false;
}

int main()
{
    int m1, m2, m3, n1, n2, n3;
    cin >> m1 >> m2 >> m3 >> n1 >> n2 >> n3;
    if (sumMedal(m1, m2, m3) > sumMedal(n1, n2, n3))
    {
        if (compareColor(m1, m2, m3, n1, n2, n3))
            cout << "both" << endl;
        else
            cout << "count" << endl;
    }
    else
    {
        if (compareColor(m1, m2, m3, n1, n2, n3))
            cout << "color" << endl;
        else
            cout << "none" << endl;
    }
    return 0;
}