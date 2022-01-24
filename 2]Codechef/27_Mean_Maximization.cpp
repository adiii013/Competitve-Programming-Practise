#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b,c) for(int a = b;a<c;a++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  int arr[n];
  double sum = 0;
  rep(i,0,n){
    cin>>arr[i];
  }
  rep(i,0,n){
    sum+=arr[i];
  }
  sort(arr,arr+n);
  sum-=arr[n-1];
  sum = sum/(n-1);
  cout<<fixed<<setprecision(6)<<sum+arr[n-1]<<endl;
}

return 0;
}