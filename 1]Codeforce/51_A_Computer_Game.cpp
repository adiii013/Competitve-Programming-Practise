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
  string s1,s2;cin>>s1>>s2;
  bool flag = true;
  rep(i,0,n){
      if(s1[i]!='0' && s2[i]!='0'){
          cout<<"NO"<<endl;
          flag = false;
          break;
      }
  }
  if(flag) cout<<"YES"<<endl;
}

return 0;
}