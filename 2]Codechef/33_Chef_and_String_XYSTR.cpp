#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  string s;cin>>s;
  ll len = s.length();
  ll ans = 0;
  for(int i = 1;i<len;i++){
      if(s[i]!=s[i-1]){
          ans++;
          i++;
      }
  }
  cout<<ans<<endl;
}
return 0;
}