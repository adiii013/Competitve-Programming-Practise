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
  map<int,int> mp;
  rep(0,n){
      int a;cin>>a;
      mp[abs(a)]++;
  }
  int count = 0;
  for(auto x:mp){
      if(x.first==0) count++;
      else if(x.second>=2) count+=2;
      else count++;
  }
  cout<<count<<endl;
}
 
return 0;
}