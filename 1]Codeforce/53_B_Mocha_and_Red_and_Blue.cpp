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
  string s;cin>>s;
  int count = 0;
  rep(i,0,n) count+=(s[i]!='?');
  if(!count) s[0] = 'R';
  rep(i,1,n){
      if(s[i]=='?' && s[i-1]!='?'){
          s[i] = s[i-1]^('B'^'R');
      }
  } 
  for(int i = n-2;i>=0;i--){
      if(s[i]=='?' && s[i+1]!='?'){
          s[i]=s[i+1]^('B'^'R');
      }
  }
  cout<<s<<endl;
}

return 0;
}