#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define rep(a,b) for(int i = a;i<b;i++)
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
  int n;cin>>n;
  while(n--){
    int t;cin>>t;
    vi v(t);
    rep(0,t) cin>>v[i];
    sort(v.begin(),v.end());
    vi b;
    rep(0,t) if(i==0 || v[i]!=v[i-1]) b.push_back(v[i]);
    rep(0,t) if(i>0 && v[i]==v[i-1]) b.push_back(v[i]);
 
    for(auto x:b) cout<<x<<" ";
    cout<<endl;     
  }
 
return 0;
}