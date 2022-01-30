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
  vi v(3);
  rep(0,3) cin>>v[i];
  sort(all(v));
  int am = abs(v[0]+v[2]-2*v[1]);
  if(am%3==0) cout<<0<<endl;
  else cout<<1<<endl;
  }


return 0;
}