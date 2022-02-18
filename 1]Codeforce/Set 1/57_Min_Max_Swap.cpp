#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int t;cin>>t;
while(t--){
    ll n;
   cin>>n;
   vector<ll> adi(n);
   vector<ll> nis(n);
 
   for(int i = 0; i < n; i++){
      cin>>adi[i];
   }
   for(int i = 0; i < n; i++){
      cin>>nis[i];
   }
 
   for(int i = 0; i < n; i++){
      if(nis[i] > adi[i]){
         swap(nis[i], adi[i]);
      }
   }
 
   ll a = *max_element(adi.begin(), adi.end());
   ll b = *max_element(nis.begin(), nis.end());
   cout<<(a * b)<<endl;
 
}
return 0;
}