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
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        if(a.length( ) <=10) cout<<a<<'\n';
        else{
            cout<<a[0]<<a.length( )-2<<a[a.length( )-1]<<'\n';
        }
    }
    return 0;
}
/*

*/