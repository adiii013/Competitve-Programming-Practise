#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll a,b;cin>>a>>b;
  cout<<(b/(a*a))<<endl;
}
return 0;
}