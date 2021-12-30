#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  string s;cin>>s;
  string sn = "";
  sn += s[0];
  bool flag = false;
  rep(0,n){
      if(i==0) continue;
      if(s[i]<s[i-1]){
          sn+=s[i];
          flag = true;
      }
      else if(s[i]==s[i-1]){
          if(flag)sn+=s[i];
          else break;
      }
      else break;
  }
  cout<<sn;
  reverse(sn.begin(),sn.end());
  cout<<sn<<endl;
}

return 0;
}