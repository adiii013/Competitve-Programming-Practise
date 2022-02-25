#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  vector<ll> v(n);
  for(ll i = 0;i<n;i++) cin>>v[i];
  if(v[n-2]>v[n-1]){
      cout<<-1<<"\n";
      continue;
  }
  else{
      if(v[n-1]<0){
          if(is_sorted(v.begin(),v.end())){
              cout<<0<<"\n";
          }
          else cout<<-1<<"\n";
      }
      else{
          cout<<n-2<<"\n";
          for(int i = 1;i<=n-2;i++){
              cout<<i<<" "<<n-1<<" "<<n<<"\n";
          }
      }
  }
}
return 0;
}