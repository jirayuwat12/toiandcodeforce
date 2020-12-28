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
    char dt[] = {'a','b','c'};
    while(t--){
        int i = 0;
        int n,k;
        cin>>n>>k;
        FOR(ii,1,k) cout<<'a';
        FOR(ii,0,n-k+1) {
            cout<<dt[i++];
            if(i>=3) i=0;
        }
        cout<<'\n';
    }
    return 0;
}
/*
abcabcabc
*/