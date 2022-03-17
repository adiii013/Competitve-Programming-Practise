#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  if(pow(3,n-1)<pow(10,9)){
      cout<<"YES\n";
      for(int i = 1;i<=pow(3,n-1);i=i*3){
          cout<<i<<" ";
      }
      cout<<"\n";
  }
  else cout<<"NO\n";
}
return 0;
}