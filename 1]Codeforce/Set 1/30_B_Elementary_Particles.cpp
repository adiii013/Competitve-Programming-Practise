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
  map<int,int> mp;
  int arr[n];
  int ans = -1;
  rep(i,0,n){
       cin>>arr[i];
  }
  rep(i,0,n){
      if(mp.find(arr[i])==mp.end()){
          mp[arr[i]] = i;
          continue;
      }
      int idx = mp[arr[i]];
      int start = idx,end = n-i-1;
      ans = max(ans,start+end+1);
      mp[arr[i]] = i;
  }
  cout<<ans<<endl;
  
  
}

return 0;
}