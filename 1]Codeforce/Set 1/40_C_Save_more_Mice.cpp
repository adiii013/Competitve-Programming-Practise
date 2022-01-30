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
  int a,b;cin>>a>>b;
  vi v(b);
  rep(i,0,b) cin>>v[i];
  sort(all(v));
  int dis = 0,count = 0;
  b--;
  while(dis<a && b>=0){
    if((dis+(a-v[b]))<a){
      dis += a-v[b];
      b--;
      count++;
      }
      else{
          break;
      }
  }
  cout<<count<<endl;
}

return 0;
}