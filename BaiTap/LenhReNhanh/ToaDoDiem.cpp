#include<iostream>
#define ll long long
using namespace std;

void check(ll x,ll y ){
    if(x > 0 && y > 0) cout << 1 << endl;
    else if(x < 0 && y > 0 ) cout << 2<< endl;
    else if(x < 0 && y < 0) cout << 3<< endl;
    else if (x > 0 && y < 0) cout << 4<< endl;
    else cout << 0<< endl;

}
int main()
{
    ll X, Y;
    cin >> X >>Y;
    check(X,Y);
	return 0;
}