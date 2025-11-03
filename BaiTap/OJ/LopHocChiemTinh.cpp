#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<string> v;
    v.push_back("Aries");
    v.push_back("Taurus");
    v.push_back("Gemini");
    v.push_back("Cancer");
    v.push_back("Leo");
    v.push_back("Virgo");
    v.push_back("Libra");
    v.push_back("Scorpio");
    v.push_back("Sagittarius");
    v.push_back("Capricorn");
    v.push_back("Aquarius");
    v.push_back("Pisces");
    int t; cin >>t;
    int d;
    string m;
    for(int i =0; i< t;i++){
        int res = 0;
        cin >> d >> m;
        if(m  =="Mar"){
            if(d >= 21) res = 0;
            else res = 11;
        }
        else if(m =="Apr"){
            if(d >= 21) res = 1;
            else res = 0;
        }
        else if(m == "May"){
            if(d >= 21) res = 2;
            else res = 1;
        }
        else if(m == "Jun"){
            if(d >= 22) res = 3;
            else res = 2;
        }
        else if(m == "Jul"){
            if(d>=23) res  = 4;
            else res = 3;
        }
        else if(m == "Aug") {
            if(d>=23) res = 5;
            else res = 4;
        }
        else if(m == "Sep") {
            if(d>=22) res = 6;
            else res = 5;
        }
        else if(m == "Oct"){
            if(d>= 23) res = 7;
            else res = 6;
        }
        else if(m =="Nov"){
            if(d>=23) res = 8;
            else res = 7;
        }
        else if(m == "Dec"){
            if(d>=22) res = 9;
            else res = 8;
        }
        else if(m == "Jan"){
            if(d >=21) res = 10;
            else res = 9;
        }
        else if(m =="Feb"){
            if(d>=20) res = 11;
            else res = 10;
        }
        cout << v[res] <<endl;
    }
    
    


    return 0;
}