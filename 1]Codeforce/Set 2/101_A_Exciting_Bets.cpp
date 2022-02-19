#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll a,b;
  cin>>a>>b;
  if(a==b) cout<<0<<" "<<0<<endl;
  else{
      ll g = abs(a-b);
      ll m = min(a%g,g-a%g);
      cout<<g<<" "<<m<<endl;
  }
}
return 0;
}