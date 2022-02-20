#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  vector<ll> v(n);
  for(ll i = 0;i<n;i++){
      cin>>v[i];
  }
  ll sum = 0;
  for(ll i = 0;i<n;i++){
     sum |= v[i]; 
  }
  cout<<sum<<endl;
}
return 0;
}