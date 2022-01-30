#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
 
typedef long long ll;
 
 
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
   ll t;
   cin>>t;
 
   while(t--){
      ll n, k;
   cin>>n>>k;
 
   vector<pair<ll,ll>> array;
 
   for(int i = 0; i < n; i++){
      ll num;
      cin>>num;
      array.emplace_back(num, 0);
   }
 
   for(int i = 0; i < n; i++){
      ll num;
      cin>>num;
      array[i].second = num;
   }
 
   sort(array.begin(), array.end());
 
   for(int i = 0; i < array.size(); i++){
      if(k >= array[i].first){
         k += array[i].second;
      }else{
         break;
      }
   }
 
   cout<<k<<endl;
   }
   return 0;
}