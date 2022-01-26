#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b,c) for(int a = b;a<c;a++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int solve(string s,string t){
  int len = s.length()-1;
  int ans = 0;
  while(len>=0 && s[len]!= t[1] ){
      ans++;len--;
  }
  len--;
  while(len>=0 && s[len]!=t[0]){
      ans++;len--;
  }
  return ans;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const string sub[] = {"00", "25","50","75"};

int t;cin>>t;
while(t--){
  string s;cin>>s;
  int ans = INT_MAX;
  for(auto x : sub){
     ans = min(ans,solve(s,x));
  }
  cout<<ans<<endl;
  }

return 0;
}