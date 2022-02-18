#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  vector<int> v(n);
  vector<pair<int,int>> vii;
  for(int i = 0;i<n;i++){
      cin>>v[i];
  }
  for(int i = 0;i<n-1;i++){
      int min_pos = i;
      for(int j = i+1;j<n;j++){
          if(v[j]<v[min_pos]){
             min_pos = j; 
          }
      }
      if(min_pos>i){
          vii.push_back({i,min_pos});
          int opt = v[min_pos];
          for(int j = min_pos;j>i;j--){
              v[j] = v[j-1];
          }
          v[i] = opt;
      }
  }
  cout<<vii.size()<<endl;
  for(auto x : vii){
      cout<<x.first+1<<" "<<x.second+1<<" "<<x.second-x.first<<endl;
  }
}
return 0;
}