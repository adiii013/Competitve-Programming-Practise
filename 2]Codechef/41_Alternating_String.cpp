#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  string s;cin>>s;
  ll ze=0,on=0;
  for(int i = 0;i<n;i++){
    if(s[i]=='0') ze++;
    else on++;
  }
  if(ze==on) cout<<ze+on<<"\n";
  else{
    if(ze>on) cout<<2*on+1<<"\n";
    else cout<<2*ze+1<<"\n";
  }
}
return 0;
}