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
  ll n, k;
    cin >> n >> k;
    ll ans = 0, cur = 1;
    while (cur < k) {
      cur *= 2;
      ++ans;
    }
    if (cur < n) ans += (n - cur + k - 1) / k;
    cout << ans << '\n';
}

return 0;
}