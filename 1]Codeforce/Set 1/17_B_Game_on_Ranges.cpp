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
    int l[n],r[n];
  map<pair<int,int>,int> m;
  rep(0,n){
      cin>>l[i]>>r[i];
       m[{l[i],r[i]}]=1;
  }
  rep(0,n){
      for(int j = l[i];j<=r[i];j++){
         if(l[i]==r[i]){
             cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;
         }
         if(m[{l[i],j-1}]==1 && m[{j+1,r[i]}]==1){
             cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;
         }
         if(j==l[i] && m[{j+1,r[i]}]==1 || j==r[i] && m[{l[i],j-1}]==1){
             cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;
         }
      }
  }
}

return 0;
}