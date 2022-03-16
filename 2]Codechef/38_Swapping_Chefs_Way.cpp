#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  string s;cin>>s;
  string temp = s;
  sort(temp.begin(),temp.end());
  bool flag = true;
  for(int i = 0;i<n;i++){
      if(temp[i]!=s[i] && temp[i]!=s[n-i-1]){
          flag = false;
      }
  }
  if(flag) cout<<"YES\n";
  else cout<<"NO\n";
}
return 0;
}