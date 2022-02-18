#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int l,r,k;cin>>l>>r>>k;
  if(l==r){
      if(l!=1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
  else{
      int count = (r-l+1) - (r/2-(l-1)/2);
       if(k>=count) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
  }
}
return 0;
}