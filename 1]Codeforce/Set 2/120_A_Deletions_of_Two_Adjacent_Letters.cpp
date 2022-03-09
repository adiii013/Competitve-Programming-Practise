#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  string s;char a;
  cin>>s>>a;
  int len = s.length();
  vector<int> v;
  int count = 1;
  for(int i = 0;i<len;i++){
      if(s[i]==a){
          v.push_back(i+1);
      }
  }
  bool flag = true;
  for(int i = 0;i<v.size();i++){
      if(v[i]%2!=0){
          cout<<"YES\n";
          flag = false;
          break;
      }
  }
  if(flag){
      cout<<"NO\n";
  }
}
return 0;
}