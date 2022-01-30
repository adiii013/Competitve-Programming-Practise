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
  vi v;
  string temp = s;
  sort(all(temp));
  rep(i,0,n){
      if(s[i]!=temp[i]) v.push_back(i);
  }
  int len = v.size();
  if(len==0){
      cout<<0<<endl;
      continue;
  }
  cout<<1<<endl;
    cout<<v.size()<<" ";

  for(auto x : v){
      cout<<x+1<<" ";
  }
  cout<<endl;

}

return 0;
}