#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll t;cin>>t;
while(t--){
  ll n;cin>>n;
  vector<ll> v(n);
  for(ll i = 0;i<n;i++) cin>>v[i];
  
  if(*max_element(v.begin() + 1, v.end() - 1) == 1 || (n == 3 && v[1] % 2 == 1)){
      cout<<-1<<"\n";
      continue;
  }
  ll count = 0;
  for(ll i = 1;i<n-1;i++){
        count+= (v[i]+1)/2;
  }
  cout<<count<<"\n";
}
return 0;
}