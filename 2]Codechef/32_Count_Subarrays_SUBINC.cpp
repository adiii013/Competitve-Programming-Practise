#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  vector<ll> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  vector<ll> len(n,1);
  ll ans = 1;
  for(int i= 1;i<n;i++){
      if(v[i]>=v[i-1]){
         len[i] +=len[i-1];
      }
     ans+=len[i];
  }
  cout<<ans<<endl;
}
return 0;
}