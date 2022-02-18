#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int m,n,k;cin>>m>>n>>k;
  if(m*n-1==k){
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
}
return 0;
}