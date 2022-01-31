#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

          
                        
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,k;cin>>n>>k;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
      cin>>v[i];
  }
  sort(v.begin(),v.end(),greater<int>());
  for(auto x: v){
      cout<<x<<" ";
  }
  cout<<endl;
}
return 0;
}