#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n,x,y;cin>>n>>x>>y;
  vector<ll> v(n);
  for(ll i = 0;i<n;i++){
      cin>>v[i];
  }
  ll c = 0;
  for(ll i = 0;i<n;i++){
      c+=(v[i]%2);
  }
  if(c%2==0){
      if(y%2==x%2)cout<<"Alice\n";
      else cout<<"Bob\n";
  }
  else{
      if(y%2!=x%2) cout<<"Alice\n";
      else cout<<"Bob\n";
  }
}
return 0;
}