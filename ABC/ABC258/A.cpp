#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 200005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin>>k;
    if(k<60){
        cout<<21<<':';
        if(k<10){
            cout<<0<<k;
        }
        else{
            cout<<k;
        }
    }
    else{
        cout<<(21+(k/60))%24<<':';
        if(k%60<10){
            cout<<0<<k%60;
        }
        else{
            cout<<k%60;
        }
    }
}
