#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  vector<int> a(n);
   for (auto& u : a) cin >> u;

    int ans = 0;
    for (int i = 0;i<n;i++) {
        ans += (i+1)*(n-i);
        if (a[i]==0)
            ans += (i+1)*(n - i);
    }
    cout <<ans<<'\n';
}
return 0;
}