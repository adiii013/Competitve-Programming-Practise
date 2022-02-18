#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  string s;cin>>s;
  int ab = 0,ba=0;
  for(int i = 0;i<s.length()-1;i++){
      if(s[i]=='a' && s[i+1]=='b'){
          ab++;
      }
      if(s[i]=='b' && s[i+1]=='a'){
          ba++;
      }
  }
  if(ab==ba){
      cout<<s<<endl;
      continue;
  }
  cout<<s.substr(0,s.length()-1)<<s[0]<<endl;
}
return 0;
}