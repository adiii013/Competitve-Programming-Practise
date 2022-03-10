#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
      if(n>19){
         cout<<"NO"<<endl;
         continue;
      }

      cout<<"YES"<<endl;

      vector<ll> v(n);
      v[0] = 1;
      for(ll i = 1; i < n; i++){
         v[i] = v[i - 1] * 2 + v[i - 1];
      }

      for(ll i = 0;i<v.size();i++){
         cout<<v[i]<<" ";
      }

      cout<<endl;
   }

return 0;
}