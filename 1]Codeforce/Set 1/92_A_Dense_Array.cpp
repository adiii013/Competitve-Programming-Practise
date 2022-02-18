#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
   int n;
  cin >> n;
  int last;
  cin >> last;
  int ans = 0;
  for (int i = 1; i < n; i++) {
    int nw;
    cin >> nw;
    int a = min(last, nw), b = max(last, nw);
    while (a * 2 < b) {
      ans++;
      a *= 2;
    }
    last = nw;
  }
  cout << ans << "\n";
}
return 0;
}