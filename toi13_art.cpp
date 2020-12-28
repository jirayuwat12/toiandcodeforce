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
#include <unordered_map>
using namespace std;
#define FOR(i,s,n) for(int i =s;i<n;i++)
#define FORR(i,s,n) for(int i =s;i>=n;i--)
typedef long long ll;
int main( ){
    int n,t;
    cin>>n>>t;
    unordered_map<int,unordered_map<int,int>> G;
    FOR(i,0,n){
        int s,h,w,o;
        cin>>s>>h>>w>>o;
        
        FOR(i,0,h){
            FOR(j,0,w){
                G[i][s+j] +=o;
            }
        }
    }
    int sum = 0;
    for(auto i : G){
        for(auto j : i.second){
            if(j.second == t) sum ++;
        }
    }
    cout<<sum;
    return 0;
}
/*

*/