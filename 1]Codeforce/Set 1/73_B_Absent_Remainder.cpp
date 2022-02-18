#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll n;cin>>n;
  vector<int> arr(n);
  for(int i = 0;i<n;i++) cin>>arr[i];
  ll mn = *min_element(arr.begin(),arr.end());
  for(int i = 0,k=0;k<n/2;i++){
      if(arr[i]!=mn){
      cout<<arr[i]<<" "<<mn<<endl;
      k+=1;
      }
  }
}
return 0;
}