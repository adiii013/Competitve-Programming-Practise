#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll t;cin>>t;
while(t--){
  ll n;cin>>n;
  vector<ll> v(n);
  vector<ll> pl;
  vector<ll> ne;
  for(ll i = 0;i<n;i++){
      cin>>v[i];
      if(i%2==0){
          pl.push_back(abs(v[i]));
      }
      else{
          ne.push_back(abs(v[i]));
      }
  }
  ll sum0=0,sum1=0;
  sort(pl.begin(),pl.end());
  sort(ne.begin(),ne.end(),greater<ll>());
  
  if(pl[0]<ne[0]){
      swap(pl[0],ne[0]);
  }
  
  for(ll i = 0;i<pl.size();i++) sum0+=pl[i];
  for(ll i = 0;i<ne.size();i++) sum1+=ne[i];
  
  cout<<sum0-sum1<<"\n";
}
return 0;
}