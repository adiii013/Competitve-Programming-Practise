#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b,c) for(int a = b;a<c;a++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  int max1 = 0,count = 0;
  vi v(n);
  rep(i,0,n)  cin>>v[i];
  rep(i,0,n){
      count+=v[i];
      max1 = max(max1,count);
  }
  int max2 = 0;
  count = 0;
  int m;cin>>m;
  vi vv(m);
  rep(i,0,m)  cin>>vv[i];
  rep(i,0,m){
      count+=vv[i];
      max2 = max(max2,count);
  }
  
  int k = max1+max2;
  int ans = max(k,0);
  cout<<ans<<endl;
  
}

return 0;
}