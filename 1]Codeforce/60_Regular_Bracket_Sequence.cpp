#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  string s;cin>>s;
  int len = s.length();
  if(len%2!=0){
      cout<<"NO"<<endl;
      continue;
  }
  if(s[0]==')' || s[len-1]=='('){
      cout<<"NO"<<endl;
      continue;
  }
  cout<<"YES"<<endl;
}
return 0;
}