#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;cin>>t;
   while(t--){
      ll n, k;
      cin>>n>>k;

      vector<ll> v(n);

      for(ll i = 0; i < n; i++){
         cin>>v[i];
      }
      ll sum = accumulate(v.begin(), v.end(), 0LL);
      if(k >= sum){
         cout<<n<<endl;
         continue;
      }
      sort(v.begin(), v.end()); 

      if(n == 1){
         if(k < (v[0] + 1)/2){
            cout<<0<<endl;
         }else{
            cout<<1<<endl;
         }
         continue;
      }
      ll cnt = 0;
      for(ll i = 0; i < n; i++){
         if(k-v[i]>=0){
            cnt++;
            k-=v[i];
         }else{
            if(k-(v[i]+1)/2>=0){
               cnt++;
               break;
            }
         }
         if(k<=0){
            break;
         }
      }

      cout<<cnt<<endl;
   }

return 0;
}