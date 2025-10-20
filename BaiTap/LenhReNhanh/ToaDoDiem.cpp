#include<iostream>
using namespace std;

void check(float x, float y ){
    if(x > 0 && y > 0) cout << 1 << endl;
    else if(x < 0 && y > 0 ) cout << 2<< endl;
    else if(x < 0 && y < 0) cout << 3<< endl;
    else if (x > 0 && y < 0) cout << 4<< endl;
    else cout << 0<< endl;

}
int main()
{
    float X, Y;
    cin >> X >>Y;
    check(X,Y);
	return 0;
}