/*
Auther : Jirayuwat Boonchan
IG : _p_pp_pp
PB : Jirayuwat Boonchan
Email : Jirayuwat12@gmail.com
*/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
#include <utility>
using namespace std;
#define FOR(i,s,n) for(int i =s;i<n;i++)
#define FORR(i,s,n) for(int i =s;i>=n;i--)
typedef long long ll;
int main( ){
    double a=0,b=0;
    while(1){
        double t,tt;
        cin>>t>>tt;
        a += t*tt;
        b += t;
        cout<<a<<' '<<b<<' '
        <<a/b<<'\n';
    }
    return 0;
}
/*

*/