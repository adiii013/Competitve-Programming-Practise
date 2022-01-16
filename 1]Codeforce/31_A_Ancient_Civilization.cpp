#include<bits/stdc++.h>
using namespace std;

#define vi vector<ll>
#define vii vector<ll,ll>
#define rep(a,b,c) for(ll a = b;a<c;a++)
#define pi pair<ll,ll>
#define all(a) (a).begin(),(a).end()

typedef long long ll;


int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll t;cin>>t;
while(t--){
  ll n,l;cin>>n>>l;
  vi a(n);
  rep(i,0,n){
      cin>>a[i];
  }
  vi v(32,0);
  for(ll x : a){
      rep(j,0,l){
          if(x&(1<<j)) v[j]++;
      }
  }
  ll ans = 0;
  rep(i,0,l){
      ll count1 = v[i];
      ll count0 = n-v[i];
      if(count1>count0) ans+=(1<<i);
  }
  cout<<ans<<endl;
}

return 0;
}