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
  vector<int> l(3);
    for (int i = 0; i < 3; ++i)
      cin >> l[i];
    bool ok = false;
    for (int i = 0; i < 3; ++i)
      ok |= l[i] == l[(i + 1) % 3] + l[(i + 2) % 3];
    for (int i = 0; i < 3; ++i) if (l[i] % 2 == 0)
      ok |= l[(i + 1) % 3] == l[(i + 2) % 3];
    cout << (ok ? "YES\n" : "NO\n");
}

return 0;
}