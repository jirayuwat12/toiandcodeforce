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
    int sum=0;
    while(t--){
        int s=0,a;
        cin>>a;
        s+=a;
        cin>>a;
        s+=a;
        cin>>a;
        s+=a;
        if(s>=2) sum++;
    }
    cout<<sum;
    return 0;
}
/*

*/