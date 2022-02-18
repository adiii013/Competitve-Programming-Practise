#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
   string s;cin >> s;
   cout << (count(s.begin(), s.end(), 'B') * 2 == s.size() ?
                 "YES\n" : "NO\n");
}
return 0;
}