#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll a,b,c;cin>>a>>b>>c;
  ll ans = b/c + b%c;
  ll m = b/c*c -1;
  if(m>=a)ans = max(ans,m/c+m%c);
  cout<<ans;
  cout<<"\n";
}
return 0;
}