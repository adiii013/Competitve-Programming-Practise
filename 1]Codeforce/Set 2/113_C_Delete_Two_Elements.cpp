#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  vector<ll> v(n);
  for(int i = 0;i<n;i++) cin>>v[i];
  ll sum = 0;
  for(int i = 0;i<n;i++){
      sum+=v[i];
  }
  ll mean = sum/n;
  ll count = 0;
  for(int i = 0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
          if((sum-v[i]-v[j])/(n-2)==mean){
              count++;
          }
      }
  }
  cout<<count<<"\n";
}
return 0;
}