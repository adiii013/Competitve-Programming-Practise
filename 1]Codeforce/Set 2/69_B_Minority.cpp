#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  string s;cin>>s;
  ll len = s.length()-1;
  ll count1=0,count0=0;
  int res = 0;
  for(int i=0;i<len+1;i++){
    if(s[i]=='1') count1++;
    else count0++;
  }
   if(count0==count1){
    if(count0==1)cout<<0<<endl;
    else if(count0>1) cout<<count0-1<<endl;
  }
  else cout<<min(count0,count1)<<endl;
}
return 0;
}