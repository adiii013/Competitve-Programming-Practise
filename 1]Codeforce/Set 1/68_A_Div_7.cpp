#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int t;cin>>t;
while(t--){
  int n;cin>>n;
  int rem;
  if(n%7==0) cout<<n<<endl;
  else{
    rem = n%7;
    int la = n%10;
    if(la-rem>0){
      cout<<n-rem<<endl;
    }
    else cout<<n+(7-rem)<<endl;
  }
}
return 0;
}