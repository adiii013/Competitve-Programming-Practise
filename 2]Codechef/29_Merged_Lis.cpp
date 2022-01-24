#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b,c) for(int a = b;a<c;a++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int length(vector<int>& a){
  int n = a.size();
  vi len;
  rep(i,0,n){
    auto lb = upper_bound(all(len),a[i]);
    if(lb!=len.end()){
      *lb=min(*lb,a[i]);
    }
    else{
      len.push_back(a[i]);
    }
  }
  return len.size();
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,m;
  cin>>n>>m;
  vi a(n),b(m);
  rep(i,0,n)cin>>a[i];
  rep(i,0,m)cin>>b[i];
  int m1 = 1,m2 = 1;
  m1 = length(a);
  m2 = length(b);
  cout<<m1+m2<<endl;
}

return 0;
}