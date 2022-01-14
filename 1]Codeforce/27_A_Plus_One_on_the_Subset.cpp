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
  int n;cin>>n;
  int arr[n];
  rep(0,n) cin>>arr[i];
  sort(arr,arr+n,greater<int>());
  int diff=0;
  for(int i = 0;i<n-1;i++){
      diff += arr[i]-arr[i+1];
  }
  cout<<diff<<endl;
}

return 0;
}