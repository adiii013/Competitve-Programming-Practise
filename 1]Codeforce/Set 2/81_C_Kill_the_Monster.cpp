#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll t;cin>>t;
while(t--){
  ll hc,dc,hm,dm;cin>>hc>>dc>>hm>>dm;
  ll c,w,a;cin>>c>>w>>a;

  ll cha = hm/dc;
  ll mon = hc/dm;
  
  if(cha>mon) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  
}
return 0;
}
