#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll t;cin>>t;
while(t--){
  ll a,b;cin>>a>>b;
  vector<ll> v;
  for(ll i=0;i<4;i++){
      ll mi = INT_MAX , ma = INT_MIN;
      ll c;cin>>c;
      while(c--){
          ll temp;cin>>temp;
          mi = min(mi,temp);
          ma = max(ma,temp);
      }
      v.push_back(mi);
      v.push_back(ma);
  }  
  ll arr[4];ll count = 0;
  for(ll i = 0;i<8;i+=2){
    arr[count] = v[i+1] - v[i];
    count++;
  }
  for(ll i = 0;i<4;i++){
      if(i==0 || i == 1) arr[i] = arr[i]*b;
      if(i==2 || i == 3) arr[i] = arr[i]*a;
  }
  ll ans = *max_element(arr,arr+4);
  cout<<ans<<endl;
}
return 0;
}