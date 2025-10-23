#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

double square(float x1, float y1, float x2, float y2){
    double x = abs(x2 - x1);
    double y = abs(y2 - y1);
    return x * y;
}


int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout <<setprecision(2) << fixed<< square(x1,y1,x2,y2);
	return 0;
}