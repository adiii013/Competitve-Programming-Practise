#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
    ll c;cin>>c;
    bool flag = false;
    if(c%2!=0){ 
      c++;
      flag = true;
    }
   if(flag){
     cout<<"-"<<c/2<<"\n";
   }
   else cout<<c/2<<"\n";
    
  }
  

return 0;
}