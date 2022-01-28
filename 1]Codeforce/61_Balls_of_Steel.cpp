#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n, k, ans = -1;
  cin >> n >> k;
  int v[n][2];
  for(int i = 0;i < n;i++){
    cin >> v[i][0] >> v[i][1];
  }
  for(int i = 0;i < n;i++){
    bool ok = true;
    for(int j = 0;j < n;j++){
      if(i != j and k < abs(v[i][0]-v[j][0]) + abs(v[i][1]-v[j][1])){
        ok = false;
        break;
      }
    }
    if(ok){
      ans = 1;break;
    }
  }
  cout << ans << endl;
}
return 0;
}