#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int t;cin>>t;
while(t--){
  string s;cin>>s;
  bool flag = true;
  int r=0,g=0,b=0;
  for(int i = 0;i<s.length();i++){
    if(s[i]=='r') r++;
    if(s[i]=='b') b++;
    if(s[i]=='g') g++;
    if(s[i]=='R' && r==0){
      cout<<"NO\n";
      flag = false;
      break;
    }
    if(s[i]=='G' && g==0){
      cout<<"NO\n";
      flag = false;
      break;
    }
    if(s[i]=='B' && b==0){
      cout<<"NO\n";
      flag = false;
      break;
    }
  }
  if(flag){
    cout<<"YES\n";
  }
}
return 0;
}