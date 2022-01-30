#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    int m = unique(s.begin(), s.end()) - s.begin();
    cout << n * a + max(n * b, (m / 2 + 1) * b) << '\n';
  
}
return 0;
}