
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int t;cin>>t;
while(t--){
  int n;cin>>n;
  string s;cin>>s;
  if(n==1){
      cout<<"YES"<<endl;
  }
  else if(n==2){
      if(s[0]!=s[1]){
          cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
  }
  else cout<<"NO"<<endl;
}
return 0;
}