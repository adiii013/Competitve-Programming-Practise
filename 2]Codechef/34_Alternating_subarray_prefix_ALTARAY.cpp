#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  vector<ll> arr(n);
  for(int i = 0;i<n;i++){
      cin>>arr[i];
  }
  vector<ll> count(n,1);
  for(int i = n-2;i>=0;i--){
      if((arr[i]>0 &&arr[i+1]<0) || (arr[i+1]>0&& 0>arr[i])){
          count[i]+=count[i+1];
      }
  }
  for(int i = 0;i<n;i++){
      cout<<count[i]<<" ";
  }
  cout<<endl;
}
return 0;
}