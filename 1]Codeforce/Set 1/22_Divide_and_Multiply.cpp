#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  ll arr[n];
  rep(0,n) cin>>arr[i];
  ll count = 1;
  rep(0,n){
      while(arr[i]%2==0){
          arr[i] /= 2;
          count *= 2;
      }
  }
 
  sort(arr,arr+n,greater<ll>());
  arr[0] = arr[0]*count;
  ll sum = 0;
  rep(0,n) sum+=arr[i];
  cout<<sum<<endl;
}

return 0;
}