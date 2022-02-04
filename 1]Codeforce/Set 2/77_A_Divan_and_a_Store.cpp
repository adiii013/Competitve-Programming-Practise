#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n,l,r,k;cin>>n>>l>>r>>k;
  vector<ll> v;
  for(ll i = 0;i<n;i++){
      int c;cin>>c;
      if(c>=l && c<=r) v.push_back(c);
  }
  sort(v.begin(),v.end());
  ll len = v.size();
  ll count = 0,price=0;
  for(ll i = 0;i<len;i++){
    if(price+v[i]<=k){
        count++;
        price+=v[i];
    }
    else break;
  }
  cout<<count<<endl;
}
return 0;
}