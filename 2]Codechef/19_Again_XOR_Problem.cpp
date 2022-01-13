#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,k,ans = 0;
  string s;
  cin>>n>>k>>s;
  int xo = 0;
  rep(0,n-k+1) xo^=(s[i]-'0');
  if(xo==1) ans++;
  int indbeg = 0,indend = n-k+1;
  while(indend<n){
      xo^=(s[indbeg++]-'0');
      xo^=(s[indend++]-'0');
      if(xo==1) ans++;
  }
  cout<<ans<<endl;
}

return 0;
}