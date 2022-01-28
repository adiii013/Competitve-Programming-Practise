#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(vector<int> v , int n){
  map<int,int> mp;
  for(int i= 0;i<n;i++){
    int w = v[i];
    while(w>0){
        if(w>=1 && w<=n && mp[w]==0){
          mp[w] = 1;
          break;
        }
        w /=2;
    }
  }
  for(int i = 1;i<=n;i++){
    if(mp[i]==0){
      cout<<"NO"<<endl;
      return;
    }
  }
  cout<<"YES"<<endl;
} 

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  vector<int> v(n);
  for(int i = 0;i<n;i++) cin>>v[i];
  solve(v,n);

}
return 0;
}