#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  ll arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    if(arr[n-1]==0) {
        cout << 0<<endl;
        return;
    }
    ll sum = 0;
    for(int i =0;i<n-1;i++) {
        sum += arr[i];
    }
    if(sum<arr[n-1]) cout<<arr[n-1]-sum<<endl;
    else cout<<1<<endl;
}
return 0;
}