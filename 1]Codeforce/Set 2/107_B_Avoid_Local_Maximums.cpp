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
  ll count = 0;
  for(ll i = 1;i<n-1;i++){
      if(v[i]>v[i-1] && v[i]>v[i+1]){
          if(i+2<n){
              v[i+1] = max(v[i],v[i+2]);
          }
          else{
              v[i+1] = v[i];
          }
          count++;
      }
  }
  cout<<count<<endl;
  for(auto x: v){
      cout<<x<<" ";
  }
  cout<<endl;
}
return 0;
}