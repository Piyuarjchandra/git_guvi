//added comment
//hooks fail condtion
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
vector<ll> decre(vector<ll> a,ll index, ll mi){
    for(ll i=0;i<=index;i++){
        a[i]-=mi;
    }
    return a;
}
ll small(vector<ll> a,ll index){
    ll mi=INT_MAX;
    ll ind=0;
    for(ll i=0;i<index;i++){
        if(a[i]<mi){
            mi=a[i];
            ind=i;
        }
    }
    return ind;
}
void prin(vector<ll> a){
  for(ll i=0;i<a.size();i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      vector<ll> a;
      ll mi=INT_MAX;
      ll index=0;
      ll counter=0;
      ll num;
      for(ll i=0;i<n;i++){
        cin>>num;
        a.pb(num);
        if(num<mi){
            mi=num;
            index=i;
        }
      }
    if(a[0]==0){
        cout<<0<<endl;
      }
      else if(mi==0){
        for(;a[0]>0;){
            ll sma=small(a,index);
            index=sma;
            counter+=a[sma]*(sma+1);
            a=decre(a,sma,a[sma]);
        }
      }
      else{
        counter=mi*n;
        a=decre(a,index,mi);
        for(;a[0]>0;){
            ll sma=small(a,index);
            index=sma;
            counter+=a[sma]*(sma+1);
            a=decre(a,sma,a[sma]);
        }
      }
      cout<<counter<<endl;
    }
return 0;
}
