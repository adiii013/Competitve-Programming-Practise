#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int maxSubArraySum(int a[],int n){
    int max_so_far = INT_MIN, max_ending_here = 0;
    for(int i  = 0;i<n;i++){
        max_ending_here = max_ending_here+a[i];
        if(max_so_far < max_ending_here) max_so_far = max_ending_here;
        if(max_ending_here<0) max_ending_here = 0;
    }
    return max_so_far;
}
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n; cin>>n;
  int arr[n];
  for(ll i = 0;i<n;i++) cin>>arr[i];
  int ans = maxSubArraySum(arr,n);
  cout<<ans<<"\n";
}
return 0;
}